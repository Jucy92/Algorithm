#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해 
 
int main(){
//	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	int i, a[10], b[10], ap,bp, lw=0;
	char win;
	ap = bp = 0;
	
	for(i=0;i<10;i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<10;i++){
		scanf("%d", &b[i]);		
	}
	for(i=0;i<10;i++){		 
		if(a[i]==b[i]){
			ap++;
			bp++;
		}	
		else if(a[i]>b[i]) {
			ap+=3;
			lw=1;
		}
		else if(a[i]<b[i]){
			bp+=3;
			lw=2;
		}
		// ################## 여긴 for문 밖으로 빼도됨, for문 안에서 처리하면서 속도 영향 받겠지..? 어찌됐든 매번 돌면서 체크하니깐.. 마지막에만 체크해도되는걸.. 
		if(ap>bp) {
			win = 'A';
		}
		else if(ap<bp){
			win = 'B';
		}
		else{
//			if(a[6]>b[6]) win = 'A';
//			else if(a[6]<b[6]) win = 'B';
			if(lw==1) win='A';
			if(lw==2) win='B';
			else win = 'D';
		 } 
		// ################# 빼버리자 
			
	}
	printf("%d %d\n", ap, bp);
	printf("%c", win);	
		
	return 0;
}
	
