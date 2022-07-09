#include <stdio.h>
#include <algorithm>		//exit(0), abs 사용하기 위해 
#include <vector>			//C++ 라이브러리 
#define size 11

using namespace std;
//int a[size][size];
//int b[size];

int main() {
//	freopen("input.txt", "rt", stdin);
	int n, m, val, i, j, k, l, h, w, sum, max=-2147000000;
	// n, m 전체 가로세로 길이 h, w 나무 가로세로 길이 
	scanf("%d %d", &n, &m); 
	vector< vector<int> > a(n+1, vector<int>(m+1));
//	vector<int> b(n+1);
	
	for(i=1; i<=n; i++){
		for(j=1; j<=m; j++){
			scanf("%d", &val);
			a[i][j] = val;
		}
	}
	scanf("%d %d", &h, &w);
	for(i=1; i<=n-h+1; i++){
		for(j=1; j<=m-w+1; j++){
			sum = 0;
			for(k=i; k<=i+h-1; k++){
				for(l=j; l<=j+w-1; l++){
					sum += a[k][l];
				}
			}
			if(sum>=max) max=sum;
//			printf("최대 값: %d",max);
		}
	}
	
//	for(i=1; i<=n; i++){
//		for(j=1; j<=m; j++){
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
	printf("%d",max);	
	
	
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
