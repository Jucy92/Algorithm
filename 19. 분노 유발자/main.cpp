#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해 
 
int main(){
	freopen("input.txt", "rt", stdin);
	int n, m, i, j, cnt=0, max=-2147000000, bk[100];
	bool flag;
	
	scanf("%d",&n);
	 /* // 1번 접근 X -> 입력 값 전체를 scanf에서 처리하지 못함 
	for(i=0;i<n;i++){
		scanf("%d ",&m);
		bk[i] = m;
		flag=false;
		for(j=i+1; j<n; j++){
			printf("bk[%d]=%d bk[%d]=%d\n",i, bk[i], j, bk[j]); // scanf("%d ",&m) -> 숫자 n개만큼 반복하면서 숫자를 넣어도 안들어감 하나 넣어지고 한바퀴돌고 하나넣고 한바퀴 
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
	 // 2번 			Time_Limit_Exceeded -> for 안에서 scanf받을 때 "%d " 띄어서 문자열 하나 더 받기를 기다리다가 나는 에러 
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
	max=bk[n-1];		 //max=bk[n]-> n=100 100번째에 가비지	
	for(i=n-1;i>=0;i--){ // max=bk[n]을 넣어둬서 i=n부터 안하고 n-1부터 
		if(bk[i]>max){
			max = bk[i];
//			printf("%d\n",max);
			cnt++;
		}
	}
	
	printf("%d\n",cnt);
	
	return 0;
}
	
