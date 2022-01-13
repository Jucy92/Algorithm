#include <stdio.h> 

int main() {
	freopen("input.txt","rt",stdin);
	int n, i ,cnt=0, tmp;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		tmp=i;
		while(tmp>0){
			tmp = tmp/10;
			cnt++;
		}
	}
	printf("%d\n",cnt);
	return 0;
}


/*
int main() {
	
	
	int n=15, i, cnt=0;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if(i/10>=1){
			printf("%d %d 십이상 수\n",i,cnt);
			cnt += 1;
		}
		else {
			printf("%d %d 십미만 수\n",i,cnt);
			cnt += 1;
		}
			
	}
	printf("%d\n",cnt);
	
	return 0;
}
*/
