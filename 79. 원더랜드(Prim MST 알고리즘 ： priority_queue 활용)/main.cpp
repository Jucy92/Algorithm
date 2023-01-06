#include<stdio.h>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;	

struct Edge{
	int v, val;
	Edge(int a, int b){
		v=a;
		val=b;
	}
	bool operator<(const Edge &b)const{
		return val>b.val;
	}
};
int chk[30];
int main(){
	freopen("input.txt", "rt", stdin);
	int v, e, a, b, c, i, x;
	vector <pair <int, int> > map[30];
	priority_queue <Edge> sQ;
	scanf("%d %d", &v, &e);
	
	
	
	for(i=1; i<=e; i++){
		scanf("%d %d %d", &a, &b, &c);
		map[a].push_back(make_pair(b,c));
		map[b].push_back(make_pair(a,c));
	}
	
	sQ.push(Edge(1,0));
	while(!sQ.empty()){
		Edge tmp = sQ.top();
	}
	
	


	return 0;
}
