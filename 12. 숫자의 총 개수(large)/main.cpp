#include <stdio.h> 

int main() {
	freopen("input.txt","rt",stdin);
	int n, sum=0 ,c=1, d=9, res=0;
	scanf("%d", &n);	// n 256�� �� 
	while(sum+d<n){		// 9���� ū ���ڵ� ó��, 99���� ū ���ڳ� ������ �ڸ��� Ȯ�� 
		res = res+(c*d);// �� ���� 
		sum = sum+d;	// �ڸ��� üũ 
		c++;			// �ڸ����� ���� 
		d = d*10;		
	}
	res = res+((n-sum)*c);
	printf("%d",res);
	
	
	return 0;
}

   
