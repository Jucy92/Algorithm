#include <stdio.h>
using namespace std;
int n, chk[11];

void DFS(int L){
	int i;
	if(L==n+1){
		for(i=1; i<=n; i++){
			if(chk[i] == 1){
				printf("%d ", i);
			}
		}
	printf("\n");
	}
	else{
		chk[L] = 1;
		DFS(L+1);
		chk[L] = 0;
		DFS(L+1);
		
	}
}

int main() {
//	freopen("input.txt", "rw", stdin); 
	
	scanf("%d", &n);
	
	DFS(1);
	
	
	return 0;
}
