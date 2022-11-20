#include <stdio.h>
using namespace std;

int n, min=2147000000;
int p[21][21], chk[21];

void DFS(int v, int sum){
	int i;
	if(v==n){
		if(sum<min) {
			min=sum;
		}
	}
	else{
		for(i=1; i<=n; i++){
			if(p[v][i]>0 && chk[i]==0){
				chk[i]=1;
				DFS(i,sum+p[v][i]);
				chk[i]=0;
			}
		}
	}
}
int main() {		//67. 최소비용(DFS:인접행렬) 
	freopen("input.txt", "rt", stdin);
	int a,b,c,m,i;
	scanf("%d %d", &n, &m);
	for(i=1; i<=m; i++){
		scanf("%d %d %d", &a, &b, &c);
		p[a][b] = c;
	}
	chk[1]=1;
	DFS(1,0);
	printf("%d\n",min);
	return 0;
}
