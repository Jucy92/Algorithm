
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
#define N 1001
using namespace std;
int chk[N];

int main(){
	freopen("input.txt", "rt", stdin);
	int n, k, i, x, cnt=0, pos=0;
	queue<int> Q;
	scanf("%d %d", &n, &k);
	
	for(i=1; i<=n; i++){
		Q.push(i);
	}
	
	while(!Q.empty()){
		x=Q.front();
//		if(chk[pos]==0){
		cnt++;
		Q.pop();	
//		}
		if(k=cnt){
			chk[x]=1;
			cnt=0;
		}
		else{
			Q.push(x);
		}
		if(Q.size()==1){
			printf("%d\n", x);
		}
	}
	
	
	
//	*/
	return 0;
}
