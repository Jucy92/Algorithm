#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
#define N 10000
using namespace std;

int main(){
	freopen("input.txt", "rt", stdin);
	int S, E, x, i, LV[N];
	LV[N]=0;
	vector<int> map[N];
	queue<int> Q[N];
	scanf("%d %d", &S, &E);
	
	Q.front(5);
	while(x<E){	//근데 이렇게 처리하면.. 큐가 다 안비워진 상태로 종료되지 않나.. -> 메모리 낭비 
		x= Q.front();
		Q.pop();
		for(i=0; i<3; i++){
			if(i==0){
				map[x].push_back(x+1);	
				Q.push(x+1);
				LV[map[x][i]]=LV[x]+1;
			}
			else if(i==1){
				map[x].push_back(x-1);
				Q.push(x-1);
				LV[map[x][i]]=LV[x]+1;
			}
			else{
				map[x].push_back(x+5);
				Q.push(x+5);
				LV[map[x][i]]=LV[x]+1;
			}
			
		}
		
		if(Q.end() == E) {
			printf("%d", LV[x]);
		}
	}
	
	
	return 0;
}
