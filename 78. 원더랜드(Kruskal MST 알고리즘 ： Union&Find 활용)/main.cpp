#include<stdio.h>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;	
//int map[26][201];
int unf[26];
struct Edge{
	int v, e, val;
	Edge(int a, int b, int c){
		v=a;
		e=b;
		val=c;
	}
	bool operator<(const Edge &b)const{
		return val<b.val;
	}
};
int Find(int x){
	if(x=unf[x]) return x;
	else return unf[x] = Find(unf[x]);
}
void Union(int a, int b){
	a=Find(a);
	b=Find(b);
	if(a!=b) unf[a]=b;
}

int main(){
	freopen("input.txt", "rt", stdin);
	int v, e, a, b, c, i;
	vector <Edge> Ed;
	scanf("%d %d", &v, &e);
	
	for(i=1; i<=v; i++){
		unf[i]=i;
	}
	for(i=1; i<=e; i++){
		scanf("%d %d %d", &a, &b, &c);
		Ed.push_back(Edge(a, b, c));
	}
	sort(Ed.begin(), Ed.end());
//	printf("%d", eg.size());		// 정상 출력 12 나옴 
	
	for(i=0; i<Ed.size(); i++){
		printf("%d %d %d\n", Ed[i].v, Ed[i].e, Ed[i].val);		
	}
	return 0;
}
