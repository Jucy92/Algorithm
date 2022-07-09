#include <stdio.h>
#include <algorithm>		//exit(0), abs 사용하기 위해 
#include <vector>			//C++ 라이브러리 
#define size 11

using namespace std;
//int a[size][size];
//int b[size];

int main() {
//	freopen("input.txt", "rt", stdin);
	int n, i, j, sum=0;
	
	scanf("%d", &n); 
	vector< vector<int> > a(n+1, vector<int>(n+1));
	vector<int> b(n+1);
	
	for(i=1; i<=n; i++){
		scanf("%d", &b[i]);
	}
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			a[j][i] = b[i];
		}
	}
	for(i=n; i>=1; i--){
		scanf("%d", &b[i]);
	}
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if (a[i][j] > b[i]) a[i][j] = b[i];
			sum += a[i][j];
		}
	}
	printf("%d", sum);
	
	
	/*
	for(i=0; i<2; i++){
		for(j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i=1;i<2;i++){
		for(j=0;j<n;j++){
			if(a[0][j]>=a[1][j]) sum += a[1][j];
			// j=0 -> 2>=1 sum+=1
			// j=1 -> 0>=1 -> sum += 2
			else sum += a[0][i];
		}
	}
	printf("%d", sum);
	*/
	/*
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	*/
	
	
	return 0;
}
