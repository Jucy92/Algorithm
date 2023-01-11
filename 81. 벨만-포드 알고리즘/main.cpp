#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue>
#define x first
#define y second
using namespace std;	
//int ch[30], dist[30], sum;	 ���ο��� ���Ŷ�.. ���������� ���� 
//vector<pair<int, int> > map[30];
/*
int DFS(int v, int b, int sum){
	int i;
	if(v==b) return 0;// �ٿ� �Ϸ���..  DFS(1,v,sum)���� �ؼ� if (v==i+1���� �ϸ鼭 �ϸ�Ƿ���.. 
	else{
		for(i=0; i<map[b].size(); i++){
			DFS(b+1, v, sum+map[b][i].x);	
		}
		return 0;
	}
}
*/
struct Edge{
	int v, val;
	Edge(int a, int b){
		v=a;
		val=b;
	}
	bool operator<(const Edge &b)const{
		return val>b.val; //�������� -> �� priority_queue�� ���� �ּҰ� ����..? �� ������ ū ���ε�  
	}
};
int main(){
	freopen("input.txt", "rt", stdin);
	int n, m, i, a, b, c;
	vector <pair <int, int> > map[30];
	priority_queue <Edge> Q;
	
	scanf("%d %d", &n, &m);
	vector<int> dist(n+1, 2147000000);
	
	for(i=1; i<=m; i++){
		scanf("%d %d %d", &a, &b, &c);
		map[a].push_back(make_pair(b,c));
	} 
	
	Q.push(Edge(1,0));
	dist[1]=0;
	while(!Q.empty()){
		int now = Q.top().v;
		int cost = Q.top().val;
		Q.pop();
		if(dist[now]<cost) continue;
		for(i=0;i<map[now].size();i++){
			int next = map[now][i].x;
			int nCost = cost+map[now][i].y;
			if(dist[next]>nCost) {
				dist[next]=nCost;
				Q.push(Edge(next,nCost));
			}
		}
	}
	scanf("%d %d\n", &a, &b);
	printf("%d\n", dist[b]);
	
	
	/*
	for(i=2;i<=n;i++){
		sum=0;
//		DFS(i, 1, sum);	// ��ͷ� ó�� ����
		// ������ �����ְ�.. map���� 1������ �������� �� ������ ����� ��� ������  
	}
	*/
	
	return 0;
}

