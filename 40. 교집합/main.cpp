	/*
#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해, abs함수 사용 
#include <vector>			//C++ 라이브러리 
#include <string.h>
using namespace std;
int a[101], b[101], c[300];
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	
	int i, j, n, m, p1=0, p2=0, p3=0, tmp, idx;
	
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}

	scanf("%d",&m);
	for(i=1; i<=m; i++){
		scanf("%d", &b[i]);
	}
	
	for(i=1; i<=n; i++){			//선택정렬 
		idx=i;
		for(j=i+1; j<=n; j++){		// n=5일 때 i포문은 5 j포문은 j=5+1 6<=5 거짓으로 빠져나옴 
			if(a[idx]>a[j]) idx=j;	//반복문 돌면서 작은 숫자를 idx에 넣고, 넣어진 작은 숫자랑 증가 값들이랑 비교하면서 더 작은 숫자 있으면 변경 
		}
		tmp=a[i];
		a[i]=a[idx];
		a[idx]=tmp;
//		printf("%d ",a[i]);
	}
	
//	printf("\n");
	for(i=1; i<=m-1; i++){			//버블정렬 
		for(j=1; j<=m-i; j++){		//1부터 도니깐 m-i-1 하면 처음부터 m-2까지 돔.. 맨마지막꺼 처리못하기 때문에 m-i-1이 아니고 m-i로 작성 
			if(b[j]>b[j+1]){
				tmp=b[j];
				b[j]=b[j+1];
				b[j+1]=tmp;
			}
		}
	}
	while(p1<=n && p2<=m){		// 마지막 행 체크 못하고 p1=n 돼서 종료 
		if(a[p1]<b[p2])  a[p1++];
		else if (a[p1]>b[p2]) b[p2++];
		else {
//			printf("p1=%d, p2=%d, p3=%d\n", p1, p2, p3);
			c[p3++]=a[p1++];
			b[p2++];
		}
	}
	for(i=1; i<p3; i++){
		printf("%d ",c[i]);
	}
	
	return 0;
}   
	*/
	
	
	/************ 강사님 코드 ************/
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
	int n, m, i, p1=0, p2=0, p3=0;
	scanf("%d", &n);
	vector<int> a(n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	sort(a.begin(), a.end());
	
	scanf("%d", &m);
	vector<int> b(m), c(n+m);
	for(i=0; i<m; i++){
		scanf("%d", &b[i]);
	}
	sort(b.begin(), b.end());
	
	while(p1<n && p2<m){
		if(a[p1]==b[p2]){
			c[p3++]=a[p1++];
			p2++;
		}
		else if(a[p1]<b[p2]){
			p1++;
		}
		else p2++;
	}
	for(i=0; i<p3; i++){
		printf("%d ", c[i]);
	}
	return 0;
}
