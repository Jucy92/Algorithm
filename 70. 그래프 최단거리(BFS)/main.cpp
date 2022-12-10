#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;	
int chk[30], n, front=-1, back=-1, Q[30];
vector <int> map[n+1]; 		//여유되면 map[n+1] / map(n+1) 에 푸시백 써서 다른적 체크해보기  
	
int main(){
	freopen("input.txt", "rt", stdin);
	int m, i, a, b, x;
	scanf("%d %d", &n, &m);

	for(i=1; i<=m; i++){
		scanf("%d %d", &a, &b);
		map[a].push_back(b);
	}
	Q[++back]=1;
	
	while(front<back){
		x=Q[++front];
		for(i=0; i<map[i].size(); i++){
			Q[++back]=map[x][i];
		}
	}
	chk[1]=1;
	DFS(1, 0);
	printf("%d\n", mini);
	return 0;
}
