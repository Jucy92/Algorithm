#include <stdio.h>
#include <vector>
#include <stack>
using namespace std;
//vector <int> map[n+1];
vector <int> map[21];
int n, cnt=0;
///int map[21][21];
int chk[21];

void DFS(int v){
	int i;
  if(v==n){
    cnt++;
  }
  else{
    for(i=0; i<map[v].size(); i++){
      if(chk[map[v][i]]==0){
        chk[map[v][i]]=1;
        DFS(map[v][i]);
        chk[map[v][i]]=0;
      }
      
    }
/* 64. 행렬 방법
    for(i=1; i<=n; i++){
      if(map[v][i]==1 && chk[i]==0){
        chk[i]=1;
        DFS(i);
        chk[i]=0;
      }
    }
*/
  }
}
int main(){
	freopen("input.txt", "rt", stdin);
  	int i, a, b, m;
  	scanf("%d %d", &n, &m);
  	for(i=1; i<=m; i++){
    scanf("%d %d", &a, &b);
    map[a].push_back(b);
    ///map[a][b]=1;
  }
	chk[1]=1;
	DFS(1);
	printf("%d", cnt);
	return 0;
}

