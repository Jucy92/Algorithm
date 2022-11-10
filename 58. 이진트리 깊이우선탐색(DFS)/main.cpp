#include <stdio.h>
using namespace std;
int n=7;

void DFS(int L){
	if(n<L){
		return;
	}
	else{
		printf("%d ", L);		// 전위 순회 출력
		DFS(L*2);
//		printf("%d ", L);		// 중위 순회 출력
		DFS(L*2+1);
//		printf("%d ", L);		// 후위 순회 출력 
	}
}

int main() {
	freopen("input.txt", "rw", stdin); 	
	
	DFS(1);
	return 0;
}
