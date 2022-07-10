#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해 
int main(){
	freopen("input.txt", "rt", stdin);
	int n, m, cnt=0, max=-2147000000, i, dB;
	
	scanf("%d %d",&n, &m);
	
	for(i=0;i<n;i++){	
		scanf("%d",&dB);
		if(m<dB) cnt++;
		else cnt=0;
		if(max<cnt) max=cnt;
	}
	if(max==0) printf("-1\n");
	else printf("%d\n", max);
	
	return 0;
}
	
