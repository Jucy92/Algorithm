#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int dx[8]={0, 1, 1, 1, 0, -1, -1, -1};
int dy[8]={-1, -1, 0, 1, 1, 1, 0, -1};
int map[30][30];
struct Loc{
	int x,y;
	Loc(int a, int b){
		x=a;
		y=b;
	}
};
int main(){
	freopen("input.txt", "rt", stdin);
	int i,j, a, n, cnt=0;
	queue <Loc> Q;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			scanf("%d", &a);
			map[i][j]=a;
		}
	}
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(map[i][j]==1){
				Q.push(Loc(i,j));
				//printf("%d\n", Q.front()); -> 1
				map[i][j]=0;
				while(!Q.empty()){
					Loc tmp =Q.front();
					Q.pop();
					for(int k=0; k<8; k++){
						if(map[tmp.x+dx[k]][tmp.y+dy[k]]==1){
							Q.push(Loc(tmp.x+dx[k], tmp.y+dy[k]));
							map[tmp.x+dx[k]][tmp.y+dy[k]]=0;
						}
					}
				}
				cnt++;
			}
		}
	}
	
	/*
	while(!Q.empty()){
		a=Q.front();
		for(i=1; i<=n; i++){
			for(j=1; j<=n; j++){
				if(map[i][j]==1){
					map[i][j]=0;
					for(int k=0; k<8; k++){
						
					}
				}
			}
		}
		for(i=0; i<8; i++){
			if(map[dx[i]][dy[i]]==1)
		}
		
		Q.pop();
	}
	*/
	printf("%d\n",cnt);
	return 0;
}
