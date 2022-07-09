#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해, abs함수 사용 
#include <vector>			//C++ 라이브러리 
#include <string.h>
using namespace std;
//int a[200001], n;
int n;

int Count(int len, int x[]){
	int i=1, cnt=1, pos=x[1];
	
	for(i=2; i<=n; i++){
		if(x[i]-pos>=len){
			cnt++;
			pos=x[i];
		}
	}
	return cnt;
}

int main(){
	freopen("input.txt", "rt", stdin);
	int m, i, lt=1, rt=0, mid, res, pos, max=-2147000000;
//	int j, tmp;
	int *x = new int[n+1];
	
	scanf("%d %d", &n, &m);
	
	for(i=1; i<=n; i++){
		scanf("%d\n", &x[i]);
	}
	
	/*
	for(i=1; i<=n; i++){
		for(j=i+1; j<=n; j++){
			if(a[i]>a[j]){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
//		printf("%d\n", a[i]);
	}
	*/
	//	rt = a[n+1];
	
	sort(x+1, x+n+1);
	
	rt = x[n];

	while(lt<=rt){
		mid = (lt+rt)/2;
		if(Count(mid, x)>=m){
			res=mid;
			lt=mid+1;
		}
		else rt=mid-1;
	}
	printf("%d\n", res);
	delete[] x; 	// 동적 배열 해제 
	
	return 0;
}


