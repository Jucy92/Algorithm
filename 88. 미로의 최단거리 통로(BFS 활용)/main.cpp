#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
#define m 7
using namespace std;

int dx[4]={0, 1, 0, -1};
int dy[4]={-1, 0, 1, 0};
int map[30][30], dis[30][30];
struct Loc{
	int x,y;
	Loc(int a, int b){
		x=a;
		y=b;
	}
};
int main(){
	freopen("input.txt", "rt", stdin);
	int i,j, a, n, cnt=0, min=2147000000;
	queue <Loc> Q;
	for(i=1; i<=m; i++){
		for(j=1; j<=m; j++){
			scanf("%d", &map[i][j]);
		}
	}
	Q.push(Loc(1,1));
	
	while(!Q.empty()){
		Loc tmp = Q.front();
		map[tmp.x][tmp.y]=1;
		Q.pop();
		int xx, yy;
		for(i=0; i<4; i++){
			xx= tmp.x+dx[i];
			yy= tmp.y+dy[i];
			if(map[xx][yy]==0 && xx>0 && xx<8 && yy>0 && yy<8){
				Q.push(Loc(xx,yy));
				dis[xx][yy]=dis[tmp.x][tmp.y]+1;
			}
		}
	}
	/*
	for(i=1; i<=n; i++){		// 여기를 굳이 이렇게 안돌리고 
		for(j=1; j<=n; j++){	// dx.size() 만큼 돌면서 Q.push(Loc(1,1));
			if(map[i][j]==0){
				Q.push(Loc(i,j));
				//printf("%d\n", Q.front()); -> 1
//				map[i][j]=0;
				while(!Q.empty()){
					Loc tmp =Q.front();
					Q.pop();
					for(int k=0; k<4; k++){
						if(map[tmp.x+dx[k]][tmp.y+dy[k]]==0){
							Q.push(Loc(tmp.x+dx[k], tmp.y+dy[k]));
							map[tmp.x+dx[k]][tmp.y+dy[k]]=1;
							cnt++;
						}
					}
				}
				if(cnt<min) min=cnt;
			}
		}
	}
	*/
	printf("%d\n",dis[7][7]);
	return 0;
}
