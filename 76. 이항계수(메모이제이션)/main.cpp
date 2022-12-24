#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int dy[21][21];
int DFS(int n, int k){
	if(dy[n][k]>0) return dy[n][k];
	if(n==k || k==0) return 1;
	else return dy[n][k]=DFS(n-1, k-1)+ DFS(n-1,k);
}

int main(){
	freopen("input.txt", "rt", stdin);
	int n, k;
	
	scanf("%d %d", &n, &k);
	printf("%d\n", DFS(n,k));
	
	
	return 0;
}

