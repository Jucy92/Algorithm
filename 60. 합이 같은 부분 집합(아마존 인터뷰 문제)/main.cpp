#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해, abs함수 사용 
#include <vector>			//C++ 라이브러리 
#include <string.h>
#include <stack>
using namespace std;
int N, M, a[11], tot=0;
bool flag = false; 

void DFS(int L, int sum){
	
	if(L==N+1){
		if(sum==(tot-sum)){
			flag = true;
		}
		
	}
	else{
		DFS(L+1, sum+a[L]);
		DFS(L+1, sum);
	}
}

int main(){
	freopen("input.txt", "rw", stdin);
	int i;
	
	scanf("%d", &N);
	
	for(i=1; i<=N; i++){
		scanf("%d", &a[i]);
		tot += a[i];
	}
	DFS(1,0);
	
	if(flag==true) printf("YES");
	else printf("NO");

	return 0;
}


