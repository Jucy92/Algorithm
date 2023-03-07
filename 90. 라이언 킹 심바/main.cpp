#include<stdio.h>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
int map[30][30], ch[30][30];
int dx[4]={-1, 0, 1, 0};
int dy[4]={0, 1, 0, -1};
struct State{
	int x, y, dis;
	State(int a, int b, int c){
		x=a;
		y=b;
		dis=c;
	}
	bool operator < (const State &b)const{
		if(dis==b.dis){
			if(x==b.x){
				return y>b.y;
			}else return x>b.x;
		}else return dis>b.dis;
	}
};

struct Lion{
	int x, y, s, ate;
	void sizeUp(){
		ate=0;
		s++;
	}
};
	
int main(){
	freopen("input.txt", "rt", stdin);
	int n, i, j, res=0;
	priority_queue<State> Q;
	Lion simba;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			scanf("%d", &map[i][j]);
			if(map[i][j]==9){
				simba.x=i;
				simba.y=j;
				map[i][j]=0;
			}
		}
	}
	Q.push(State(simba.x, simba.y, 0));
	simba.s=2;
	simba.ate=0;
	while(!Q.empty()){
		State tmp=Q.top();	// 이동 가능한 곳에서 우선 정렬된 값 저장 
		Q.pop();
		int x=tmp.x;		
		int y=tmp.y;
		int z=tmp.dis;
		if(map[x][y]!=0 && map[x][y]<simba.s){	//
			simba.x=x;		// 심바 이동을 위해 좌표 변경 
			simba.y=y;
			simba.ate++;	// 이동 후 잡아 먹어서 성장 
			if(simba.s==simba.ate) simba.sizeUp(); // 레벨업 체크 
			map[x][y]=0;		// 잡아먹었으니깐 0 
			while(!Q.empty()) Q.pop(); // 74행에서 담은 값들 다 pop
			
			for(i=1; i<=n; i++){
				for(j=1; j<=n; j++){
					ch[i][j]=0;		// 이동 가능하게 체크 배열 초기화 
				}
			}
			res=tmp.dis;
		}
		
		for(i=0; i<4; i++){
			int xx, yy;
			xx=dx[i]+x; 
			yy=dy[i]+y;
			if(map[xx][yy]>0 && map[xx][yy]<simba.s && xx>1 && xx<=n && yy>1 && yy<=n){
				// 0보다 크고 심바 사이즈보다 작고, 범위 안에 있을 때 푸시	
				Q.push(State(xx,yy,z+1));
				ch[xx][yy]=1;
			}
//			if(xx<1 || xx>n || yy<1 || yy>n || map[xx][yy]>simba.s || ch[xx][yy]>0) continue;
//			Q.push(State(xx, yy, z+1));
//			ch[xx][yy]=1;
		}
	}
	printf("%d",res);
	return 0;
}
