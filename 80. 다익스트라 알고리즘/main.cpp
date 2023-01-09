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
//	int chk[30], dist[30]=2147000000;
	vector<int> dist(n+1, 2147000000);
	vector <pair <int, int> > map[30];
	priority_queue <Edge> Q;
	
	scanf("%d %d", &n, &m);
	
	for(i=1; i<=m; i++){
		scanf("%d %d %d", &a, &b, &c);
		map[a].push_back(make_pair(b,c));
	} 
	
	Q.push(Edge(1,0));
	dist[1]=0;
	while(!Q.empty()){
		Edge tmp = Q.top();
		int v = tmp.v;
		int val = tmp.val;
		if(dist[v]==0){
			dist[v]=1;
			for(i=0;i<map[v].size();i++){
				Q.push(Edge(map[v][i].x,map[v][i].y));
			}
			
		}
	}
	
	/*
	for(i=2;i<=n;i++){
		sum=0;
//		DFS(i, 1, sum);	// ��ͷ� ó�� ����
		// ������ �����ְ�.. map���� 1������ �������� �� ������ ����� ��� ������  
	}
	*/
	
	return 0;
}

