#include<stdio.h>
#include<vector>
#include<stack>
using namespace std;	
int chk[30], n, mini=2147000000;
vector<pair<int, int> > map[30];	//���� �� 

void DFS(int v, int sum){
	int i;
	if(v==n){
		if(sum<mini) mini=sum;
	}
	else{
		for(i=0; i<map[v].size(); i++){
			if(chk[map[v][i].first]==0){
				chk[map[v][i].first]=1;
				DFS(map[v][i].first, sum+map[v][i].second);
				chk[map[v][i].first]=0;
			}
		}
//		for(i=1; i<=n; i++){
//			if(map[v][i]>0 && chk[i]==0){
//				chk[i]=1;
//				DFS(i, sum+map[v][i]);
//				chk[i]=0;
//			}
//		}
	}	
}		
int main(){
	freopen("input.txt", "rt", stdin);
	int m, i, a, b, c;
	scanf("%d %d", &n, &m);
	
	for(i=1; i<=m; i++){
		scanf("%d %d %d", &a, &b, &c);
		map[a].push_back(make_pair(b, c));
//		map[a][b] = c;
	}
	chk[1]=1;
	DFS(1, 0);
	printf("%d\n", mini);
	return 0;
}
