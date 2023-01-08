#include<stdio.h>
#include<vector>
#include<algorithm>
#define x first
#define y second
using namespace std;	
int ch[30], dist[30], sum;
vector<pair<int, int> > map[30];

int DFS(int v, int b, int sum){
	int i;
	if(v==b) return 0;// 꾸역 하려면..  DFS(1,v,sum)으로 해서 if (v==i+1으로 하면서 하면되려나.. 
	else{
		for(i=0; i<map[b].size(); i++){
			DFS(b+1, v, sum+map[b][i].x);	
		}
		return 0;
	}
}

int main(){
	freopen("input.txt", "rt", stdin);
	int n, m, i, a, b, c;
	scanf("%d %d", &n, &m);
	
	for(i=1; i<=m; i++){
		scanf("%d %d %d", &a, &b, &c);
		map[a].push_back(make_pair(b,c));
	} 
	for(i=2;i<=n;i++){
		sum=0;
//		DFS(i, 1, sum);	// 재귀로 처리 못함
		// 정점을 던져주고.. map에서 1정점을 기준으로 각 정점에 연결된 모든 간선을  
	}
	
	return 0;
}

