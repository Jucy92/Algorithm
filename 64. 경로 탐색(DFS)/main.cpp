#include <stdio.h>
using namespace std;

int N, M, map[21][21], chk[21], cnt=0;
void DFS(int v){
	int i;
	if(N==v){ 
		cnt++;
	}
	else{
		for(i=1;i<=N;i++){
			if(map[v][i]==1 && chk[i]==0){
				chk[i]=1;
				DFS(i);
				chk[i]=0; // i를 전역변수로 잡으면 X, 앞단 DFS(call) 했을 때  i값을 가져간다.. 
				
			}
		}
	}
}
int main(){
	freopen("input.txt", "rw", stdin);
	int a,b, i;
	chk[1]=1;
	
	scanf("%d %d", &N, &M);
	
	for(i=1; i<=M; i++){
		scanf("%d %d", &a, &b);
		map[a][b] = 1;
	}
	DFS(1);
	printf("%d", cnt);
	/*
	for(i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	*/
	
	return 0;
}
