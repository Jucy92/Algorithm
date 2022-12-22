#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main(){
	freopen("input.txt", "rt", stdin);
	int n, k, i, mul1=1, mul2=1;
	
	scanf("%d %d", &n, &k);
	for(i=n; i>k; i--){
		mul1*= i;
	}
	for(i=1; i<=(n-k); i++){
		mul2*= i;
	}
	printf("%d\n", mul1/mul2);
	
	
	return 0;
}

