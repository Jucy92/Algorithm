#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해, abs함수 사용 
#include <vector>			//C++ 라이브러리 
#include <string.h>
#include <stack>
using namespace std;
int N, M, a[11], cnt=0;

void DFS(int L, int sum){

	if(L==N+1){
		if(M==sum) cnt++;
	}
	else{
		DFS(L+1, sum+a[L]);
		DFS(L+1, sum);
		DFS(L+1, sum-a[L]);
	}
}

int main(){
//	freopen("input.txt", "rw", stdin);
	int i;
	
	scanf("%d %d", &N, &M);
	
	for(i=1; i<=N; i++){
		scanf("%d", &a[i]);
	}
	DFS(1,0);
	
	if(cnt==0){
		printf("-1");
	}
	else printf("%d",cnt);

	return 0;
}


