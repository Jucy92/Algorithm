#include<stdio.h>
int reverse(int x){
	int rev=0, n;
	
	while(x){
		rev = (rev*10)+(x%10);
		x = x/10;
	}
	return rev;
}

bool isPrime(int x){
	int tmp;
	bool flag=true;
	if(x==1) return false;
	for(int i=2;i<x;i++){
		if(x%i==0){
			flag=false;
			break;
		}
	}
	return flag;
}
/*	//���ڵ� - �ϳ��� ���������� �迭�� �ְ� ���������� �ٲ� �� ���ϸ鼭 ����Ϸ��� ���� 
int reverse(int x){
	int rev[100001]; 
	int tmp, cnt=0;
	
	while(x>0){ //�Է¹��� ���� 1�̻� 
		tmp=x%10;
		rev[cnt] = tmp;
		cnt++;
		x=x/10;
	}
}
*/
int main(){
	freopen("input.txt", "rt", stdin);
	int n, num, tmp, rev;
	
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%d", &num);
		rev = reverse(num);
		if(isPrime(rev)){
			printf("%d ",rev);	
		}
		
	}
	
	return 0;
}

