#include <stdio.h>
#include <queue>
#include <vector>
using namespace std;
int dist[101];
struct Edge{
	int s, e, val;
	Edge(int a, int b, int c){
		s=a;
		e=b;
		val=c;
	}
	/*
	bool operator <(Edge &b){
		return val>b.val;
	}*/
};

int main() {
	freopen("input.txt","rw",stdin);
	int n, m, a, b, c, i, j;
//	priority_queue <Edge> Q;
	vector<Edge> Ed;
	scanf("%d %d", &n, &m);
	
	for(i=1; i<=n; i++){
		dist[i] = 2147000000;
	}
	for(i=1; i<=m; i++){
		scanf("%d %d %d", &a, &b, &c);
		Ed.push_back(Edge(a, b, c));
	}
	scanf("%d %d", &a, &b);
	dist[a]=0;
//	printf("%d", Ed.size();
	for(i=1; i<n; i++){
		for(j=0; j<Ed.size(); j++){
			int u=Ed[j].s;
			int v=Ed[j].e;
			int w=Ed[j].val;
			if(dist[u]!=2147000000 && dist[u]+w<dist[v]){
				dist[v]=dist[u]+w;
			}
		}	
	}
}
