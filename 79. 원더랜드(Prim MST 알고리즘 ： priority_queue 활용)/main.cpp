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
		scanf("%d %d %d", &a, &b, &c);	// %d %d %d\n �ϸ� ���� ��ٸ��� �־ ���� ���  
		map[a].push_back(make_pair(b, c));
		map[b].push_back(make_pair(a, c));
	}
	Q.push(Edge(1,0));
//	chk[1]=1;  //���� Ʈ�� �߰� �ϰ� 1�� ����  
	// map�� �ּ� �� ���� x
	// Edge�� �ּ� �� ���� o
	// Q�� priority �ִ� �� ���� o -> push �Ǳ����� - �ٿ��� �ּ� �� ó�� 
	while(!Q.empty()){
		Edge tmp = Q.top();
		Q.pop();
//		int n = tmp.e;
//		int m = tmp.val;
		
		 
		if(chk[tmp.e]==0){	// ���ȵ� ���� 
			res += tmp.val; 
			chk[tmp.e]=1;
			for(i=0; i<map[tmp.e].size(); i++){ // map[����][����] 
				if(chk[map[tmp.e][i].first]==0){	// ���ȵ� ���� 
					Q.push(Edge(map[tmp.e][i].first, map[tmp.e][i].second));	
				}
			}
		} 	
	}
	
	printf("%d\n",res);
	
	return 0;
}

