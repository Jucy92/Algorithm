#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해, abs함수 사용 
#include <vector>			//C++ 라이브러리 
#include <string.h>
using namespace std;
//int a[101], b[101], c[300];
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, n, m, p1=1, p2=1, p3=1;
	//vector <int> a(n), b(m), c(n+m); // 백터에서 n+m, sum=n+m 후  sum 등 초기화된 변수에 연산 작업 x --------> 구라... n, m 입력 받기 전에 선언해서 나는 오류.. 
	
	//printf("%d", sizeof(d)/sizeof(int));
	
	scanf("%d",&n);
	vector <int> a(n);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}

	scanf("%d",&m);
	vector <int> b(m), c(n+m);
	for(i=1; i<=m; i++){
		scanf("%d", &b[i]);
	}
	
	
	while(p1<=n && p2<=m){			// a[n], b[m] 둘 중 하나라도 마지막 인덱스의 값을 읽으면 종료, 그럼 다른 배열의 나머지 값들도 처리해줘야함 
		if(a[p1]<b[p2]){
			c[p3++]=a[p1++];
		}else {						//a[p1] > b[p2] 이거나 a[p1] == b[p2]
			c[p3++]=b[p2++];
		}
	}
	while(p1<=n) c[p3++]=a[p1++];	//p1<=n -> p1가 n까지 가지 못했을 경우 -> 21행에서 p2가 종료 됐을 때, -> a배열의 남은 값들을 다 c배열로 넣어준다. 
	while(p2<=m) c[p3++]=b[p2++];	//p2<=m -> p2가 m까지 가지 못했을 경우 -> 21행에서 p1이 종료 됐을 때, -> b배열의 남은 값들을 다 c배열로 넣어준다.
	
	
	
	for(i=1; i<p3; i++){
		printf("%d ", c[i]);
	}
//	for(i=1; i<=n; i++){
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for(i=1; i<=m; i++){
//		printf("%d ", b[i]);
//	}
//	printf("\n");
//	for(i=1; i<=n+m; i++){
//		printf("%d ", c[i]);
//	}
	
	
	return 0;
}   

