#include <stdio.h>
#include <queue>
#include <algorithm>
using namespace std;

int map[1001][1001], ch[1001][1001];
int dx[4] ={-1,0,1,0};
int dy[4] ={0,1,0,-1};
struct Loc{
	int x,y;
	Loc(int a, int b){
		x=a, y=b;	
	}
};

int main(){
	freopen("input.txt", "rt", stdin);
	int n, m, a, i, j, cnt=0, chk=0, res=-2147000000;
	queue <Loc> Q;
	scanf("%d %d", &m, &n); // m가로 n세로 
	for(i=0; i<n; i++){		// 세로 i로 처리 
		for(j=0; j<m; j++){
			scanf("%d", &a);
			map[i][j]=a;
			if(a==1){
				Q.push(Loc(i,j));
				cnt++;	
			} 
		}
	}
	if(Q.empty()) printf("-1\n"); // 익은게 없음
	else{
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
		for(i=0; i<n; i++){		// 처리 끝나고.. 0(안익은 토마토) 따로 체크.. 
			for(j=0; j<m; j++){
				if(map[i][j]==0){
					chk++;
				} 
			}
		}
		if(cnt==m*n){
		printf("0\n");
		}	
		else if(chk!=0) printf("-1\n");
		else{
			printf("%d\n", res);
		}
	}
	
	return 0;
}
