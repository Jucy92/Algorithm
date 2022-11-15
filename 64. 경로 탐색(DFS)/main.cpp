#include <stdio.h>
using namespace std;

int map[10][10], chk[10][10], cnt=0;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void DFS(int x, int y){
	int i, xx, yy;
	if(x==7 && y==7){
		cnt++;
	}
	else{
		for(i=0; i<4; i++){
			xx = x+dx[i];
			yy = x+dy[i];
			if(xx<1 || xx>7 || yy<1 || yy>7) continue;
			if(map[xx][yy]==0 && chk[xx][yy]==0){
				chk[xx][yy]=1;
				DFS(xx,yy);
				chk[xx][yy]=0;
			}
		}
	}
}
int main(){
	freopen("input.txt", "rt", stdin);
	int i, j;
	
	for(i=1; i<=7; i++){
		for(j=1; j<=7; j++){
			scanf("%d", &map[i][j]);
		}
	}
//	for(i=1; i<=7; i++){
//		for(j=1; j<=7; j++){
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}
	chk[1][1]=1;
	DFS(1, 1);
	printf("%d\n", cnt);
	
	return 0;
}
