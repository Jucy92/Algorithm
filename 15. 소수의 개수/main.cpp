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


/*								// ��Ÿ�� 1�� �̻�  
int main() {
	freopen("input.txt","rt",stdin);
	int n, i, j, flag, cnt=0;
	
	scanf("%d",&n);
	for(i=2; i<=n; i++){		// N�� �Ҽ��� 2���� N���� 1�� ���� 		 / n�̶�� ���ڰ� �������� ��  
		flag=1;					// i = 2 �̸� j���� ��������  �ٷ� �������ͼ� 3���� �Ѿ 
		for(j=2;j<i;j++){		// J�� 2���� i������ 1�� ���� / i~n���� ��� ���ڰ� �Ҽ����� Ȯ�� 
			if(i%j==0){
				flag=0;
				break;			// i�� ���鼭 �ϳ��� ����� ������, �Ҽ��� �ƴϱ� ������ �ٷ� break�� �������͵� �ȴ�. 
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
   
