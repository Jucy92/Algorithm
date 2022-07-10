#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해 
int a[60], b[60];
int main(){
//	freopen("input.txt", "rt", stdin);
	int i, j, n, input1, input2, sum=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		sum=0;
		scanf("%d %d", &input1, &input2);
		for(j=1;j<=input1;j++) {
			sum+=j;
		}
		if(sum==input2){
			printf("YES\n");	
		}
		else printf("NO\n");
	}
	
	
	return 0;
	
}
	
