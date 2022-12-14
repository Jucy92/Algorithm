#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
#define N 10001
using namespace std;
int chk[10001], jmp[3]={1,-1,5};

int main(){
	freopen("input.txt", "rt", stdin);
	int S, E, x, i, pos; // chk[10001], jmp[3]={1,-1,5}; ���������� ������ ������ ���̽� ����� �ȵ�  7 8945
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
//				chk[pos]=1;				// 0!=chk[pos] �̸� �ǰ�, ������ üũ�ؾ��ؼ� �̷��� ó���ϸ� �ȵ� 
				
			}
		}
	}
	
	
	
	
	return 0;
}
