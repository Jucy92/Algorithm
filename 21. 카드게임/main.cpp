#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해 
 
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	int i, a[10], b[10], ap,bp;
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
		}
		else if(a[i]<b[i]){
			bp+=3;
		}
		if(ap>bp) {
			win = 'A';
		}
		else if(ap<bp){
			win = 'B';
		}
		else win = 'D';
	}
	printf("%d %d\n", ap, bp);
	printf("%c", win);	
		
	return 0;
}
	
