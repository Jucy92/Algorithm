
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
#define N 1001
using namespace std;
int chk[N];
int main(){
//	freopen("input.txt", "rt", stdin);
	int n, k, i, x;
	queue<int> Q;
	scanf("%d %d", &n, &k);
	
	for(i=1; i<=n; i++){
		Q.push(i);
	}
	
	while(!Q.empty()){
		
		for(i=1; i<k; i++){
			Q.push(Q.front());
			Q.pop();
			
		}
		Q.pop(); 	// k번 째 숫자는 그냥 pop만  
		if(Q.size()==1){
			printf("%d", Q.front());
		}
	}
	
	return 0;
}

/*					// 아래 테스트 케이스로 실행 시 오류가 어디서 나는지 체크 
int main(){
	freopen("input.txt", "rt", stdin);
	int n, k, i, x, cnt=0, pos=0;
	queue<int> Q;
	scanf("%d %d", &n, &k);	//20 3	-> 20가 나와야하는데 19가 나옴 
	
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
	return 0;
}
*/
