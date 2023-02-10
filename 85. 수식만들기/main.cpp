#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int N, a[20], op[5], mini=2147000000, maxi=-2147000000;
void DFS(int L, int sum){
	if(L==N){
		if(sum<mini) mini=sum;
		if(sum>maxi) maxi=sum;
	}
	else{
		if(op[0]==1){
			op[0]--;
			DFS(L+1, sum+a[L]);
			op[0]++;
		}
		if(op[1]==1){
			op[1]--;
			DFS(L+1, sum-a[L]);
			op[1]++;
		}
		if(op[2]==1){
			op[2]=0;
			DFS(L+1, sum*a[L]);
			op[2]=1;
		}
		if(op[3]==1){
			op[3]=0;
			DFS(L+1, sum/a[L]);
			op[3]=1;
		}
	}
}
int main(){
	freopen("input.txt", "rt", stdin);
	int i;
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<4;i++){
		scanf("%d", &op[i]);
	}
	DFS(1, a[0]);
	printf("%d\n%d\n",maxi, mini);
	return 0;
}
