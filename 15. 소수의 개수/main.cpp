#include <stdio.h> 
int main(){
	freopen("input.txt", "rt", stdin);
	int n,i,j,flag,cnt=0;
	
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		flag=1;
		for(j=2;j*j<=i;j++){
			if(i%j==0){
				flag=0;
				break;
			}	
		}
		if(flag==1){
//			printf("%d\n",i);
			cnt++;
		} 
	}
	printf("%d\n",cnt);
	return 0;
} 


/*								// 런타임 1초 이상  
int main() {
	freopen("input.txt","rt",stdin);
	int n, i, j, flag, cnt=0;
	
	scanf("%d",&n);
	for(i=2; i<=n; i++){		// N의 소수는 2부터 N까지 1씩 증가 		 / n이라는 숫자가 정해졌을 때  
		flag=1;					// i = 2 이면 j포문 거짓으로  바로 빠져나와서 3으로 넘어감 
		for(j=2;j<i;j++){		// J는 2부터 i전까지 1씩 증가 / i~n까지 모든 숫자가 소수인지 확인 
			if(i%j==0){
				flag=0;
				break;			// i가 돌면서 하나라도 약수가 나오면, 소수가 아니기 때문에 바로 break로 빠져나와도 된다. 
			}
			flag=1;
		}
		if(flag==1){
			cnt++;
		}
	}
	printf("%d\n",cnt);
	return 0;
	
}
*/
   
