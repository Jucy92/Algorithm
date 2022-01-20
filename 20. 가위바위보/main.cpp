#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해 
 
int main(){
//	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	int n, m, i, cnt=0, a[100], b[100];
	
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<n;i++){
		scanf("%d", &b[i]);		
	}
	for(i=0;i<n;i++){
		if(a[i]==b[i]) printf("D\n");
		else if(a[i]-b[i]==1) printf("A\n");
		else if(a[i]-b[i]==-2) printf("A\n");
		else printf("B\n");
	}
	/*
	for(i=0;i<n;i++){
		if(a[i]==b[i]) printf("D\n");
		else if(a[i]==1 && b[i]==3) printf("A\n");
		else if(a[i]==2 && b[i]==1) printf("A\n");
		else if(a[i]==3 && b[i]==2) printf("A\n");
		else printf("B\n");
	}
	*/
	
	
	
		
	
	
	return 0;
}
	
