#include <stdio.h>
#include <algorithm>		//exit(0) ����ϱ� ���� 
 
int main(){
	freopen("input.txt", "rt", stdin);
	int n, m, i, j, cnt=0, max=-2147000000, bk[100];
	bool flag;
	
	scanf("%d",&n);
	 /* // 1�� ���� X -> �Է� �� ��ü�� scanf���� ó������ ���� 
	for(i=0;i<n;i++){
		scanf("%d ",&m);
		bk[i] = m;
		flag=false;
		for(j=i+1; j<n; j++){
			printf("bk[%d]=%d bk[%d]=%d\n",i, bk[i], j, bk[j]); // scanf("%d ",&m) -> ���� n����ŭ �ݺ��ϸ鼭 ���ڸ� �־ �ȵ� �ϳ� �־����� �ѹ������� �ϳ��ְ� �ѹ��� 
			if(bk[i]>bk[j]){ 
				flag=true;
			}else {
				flag=false;
				break;	
			}
		}
		if(flag==true) cnt++;
	}
	*/
	/*
	 // 2�� 			Time_Limit_Exceeded -> for �ȿ��� scanf���� �� "%d " �� ���ڿ� �ϳ� �� �ޱ⸦ ��ٸ��ٰ� ���� ���� 
	for(i=0;i<n;i++){
		scanf("%d",&m);
		bk[i] = m;
	}

	for(i=0;i<n;i++){
		flag=false;
		for(j=i+1; j<n; j++){
//			printf("bk[%d]=%d bk[%d]=%d\n",i, bk[i], j, bk[j]);
			if(bk[i]>bk[j]){
				flag=true;
			}else {
				flag=false;
				break;	
			}
		}
		if(flag==true) cnt++;
	}
	*/
	
	for(i=0;i<n;i++){
		scanf("%d",&bk[i]);
	}
	max=bk[n-1];		 //max=bk[n]-> n=100 100��°�� ������	
	for(i=n-1;i>=0;i--){ // max=bk[n]�� �־�ּ� i=n���� ���ϰ� n-1���� 
		if(bk[i]>max){
			max = bk[i];
//			printf("%d\n",max);
			cnt++;
		}
	}
	
	printf("%d\n",cnt);
	
	return 0;
}
	
