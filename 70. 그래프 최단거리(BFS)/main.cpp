#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;	
int chk[30], n, front=-1, back=-1, Q[30], cnt[30];
//vector <int> map[n+1]; 		//여유되면 map[n+1] / map(n+1) 에 푸시백 써서 다른적 체크해보기  
vector <int> map[30];
	
int main(){
	freopen("input.txt", "rt", stdin);
	queue<int> Q;
	int m, i, a, b, x;
	scanf("%d %d", &n, &m);

	for(i=1; i<=m; i++){
		scanf("%d %d", &a, &b);
		map[a].push_back(b);
	}
//	Q[++back]=1;
	Q.push(1);
	chk[1]=1;
	
//	while(front<back){
//		x=Q[++front];
	while(!Q.empty()){
		x=Q.front();	
		Q.pop();
//		printf("%d ",x);

		for(i=0; i<map[x].size(); i++){
			if(chk[map[x][i]]==0){
				chk[map[x][i]]=1;
//				Q[++back]=map[x][i]; 
				Q.push(map[x][i]);
				cnt[map[x][i]]=cnt[x]+1;
			}
			
		}

	}

	for(i=2; i<=n; i++){
		printf("%d : %d\n", i, cnt[i]);
	}

	return 0;
}
