#include <stdio.h>
#include <algorithm>		//exit(0) ����ϱ� ���� 
 
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
		// ################## ���� for�� ������ ������, for�� �ȿ��� ó���ϸ鼭 �ӵ� ���� �ް���..? ����Ƶ� �Ź� ���鼭 üũ�ϴϱ�.. ���������� üũ�ص��Ǵ°�.. 
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
		// ################# �������� 
			
	}
	printf("%d %d\n", ap, bp);
	printf("%c", win);	
		
	return 0;
}
	
