#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
#define N 10001
using namespace std;
int chk[10001], jmp[3]={1,-1,5};

int main(){
	freopen("input.txt", "rt", stdin);
	int S, E, x, i, pos; // chk[10001], jmp[3]={1,-1,5}; 지역변수로 잡으면 마지막 케이스 출력이 안됨  7 8945
	queue<int> Q;
	scanf("%d %d", &S, &E);
	
	Q.push(S);
	chk[S]=1;
	
	while(!Q.empty()){
		x=Q.front();
		Q.pop();
		for(i=0; i<3; i++){
			pos=x+jmp[i];
			if(pos<=0 || pos>10000) continue;
			if(pos==E){
				printf("%d\n", chk[x]);
				exit(0);
			}
			if(chk[pos]==0){
				chk[pos]=chk[x]+1; 
				Q.push(pos);
//				chk[pos]=1;				// 0!=chk[pos] 이면 되고, 레벨도 체크해야해서 이렇게 처리하면 안됨 
				
			}
		}
	}
	
	
	
	
	return 0;
}
