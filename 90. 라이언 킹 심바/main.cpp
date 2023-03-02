#include <stdio.h>
#include <queue>
#include <algorithm>
using namespace std;

int map[30][30], ch[30][30];
int dx[4] ={0,1,0,-1};
int dy[4] ={-1,0,1,0};
int n;
struct Loc{
	int x,y;
	Loc(int a, int b){
		x=a, y=b;	
	}
};

int main(){
	freopen("input.txt", "rt", stdin);
	int i, j, cnt=0, chk=0, res=-2147000000;
	queue <Loc> Q;
	scanf("%d", &n); // m가로 n세로 
	for(i=0; i<n; i++){		// 세로 i로 처리 
		for(j=0; j<n; j++){
			scanf("%d", &map[i][j]);
			if(map[i][j]==9){
				Q.push(Loc(i,j));
			} 
		}
	}
	while(!Q.empty()){
		Loc tmp = Q.front();
		int xx, yy;
		Q.pop();
		for(i=0; i<4; i++){
			xx= dx[i]+tmp.x; 
			yy= dy[i]+tmp.y;
			if(map[xx][yy]==0 && xx>=0 && xx<n && yy>=0 && yy<m){
				map[xx][yy]=1;
				Q.push(Loc(xx,yy));
				ch[xx][yy]=ch[tmp.x][tmp.y]+1;
				if(res < ch[xx][yy]){
					res = ch[xx][yy];	
				} 
			} 
		}
	}
	return 0;
}
