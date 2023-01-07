#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int chk[30];
struct Edge{
	int e, val;
	Edge(int a, int b){
		e=a;
		val=b;
	}
	bool operator< (const Edge &b) const{
		return val>b.val;
	}
};

int main(){
//	freopen("input.txt", "rt", stdin);
	int v, e, i, a, b, c, res=0;
	priority_queue <Edge> Q;
	vector <pair <int, int> > map[30];
	scanf("%d %d", &v, &e);
	
	for(i=1; i<=e; i++){
		scanf("%d %d %d", &a, &b, &c);	// %d %d %d\n 하면 공백 기다리고 있어서 무한 대기  
		map[a].push_back(make_pair(b, c));
		map[b].push_back(make_pair(a, c));
	}
	Q.push(Edge(1,0));
//	chk[1]=1;  //하위 트리 추가 하고 1로 변경  
	// map은 최소 값 정렬 x
	// Edge는 최소 값 정렬 o
	// Q는 priority 최대 값 정렬 o -> push 되기전에 - 붙여서 최소 값 처리 
	while(!Q.empty()){
		Edge tmp = Q.top();
		Q.pop();
//		int n = tmp.e;
//		int m = tmp.val;
		
		 
		if(chk[tmp.e]==0){	// 사용안된 정점 
			res += tmp.val; 
			chk[tmp.e]=1;
			for(i=0; i<map[tmp.e].size(); i++){ // map[정점][간선] 
				if(chk[map[tmp.e][i].first]==0){	// 사용안된 간선 
					Q.push(Edge(map[tmp.e][i].first, map[tmp.e][i].second));	
				}
			}
		} 	
	}
	
	printf("%d\n",res);
	
	return 0;
}

