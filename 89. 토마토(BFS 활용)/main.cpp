#include <stdio.h>
#include <queue>
#include <algorithm>
using namespace std;

int map[1001][1001], ch[1001][1001];
int dx[4] ={0,1,0,-1};
int dy[4] ={-1,0,1,0};
struct Loc{
	int x,y;
	Loc(int a, int b){
		x=a, y=b;	
	}
};

int main(){
	freopen("input.txt", "rt", stdin);
	int n, m, a, i, j;
	queue <Loc> Q;
	scanf("%d %d", &m, &n); // m가로 n세로 
	for(i=0; i<n; i++){		// 세로 i로 처리 
		for(j=0; j<n; j++){
			scanf("%d", &a);
			map[i][j]=a;
			if(a==1) Q.push(Loc(i,j));
		}
	}
	if(Q.empty()) printf("-1\n"); // 익은게 없음
	else{
		while(!Q.empty()){
			Loc tmp = Q.front();
			int xx, yy;
			Q.pop();
			for(i=0; i<4; i++){
//				xx= 
			}
		}
	} 
	
	return 0;
}
