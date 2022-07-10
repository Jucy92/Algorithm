#include <stdio.h> 

int main() {
	freopen("input.txt","rt",stdin);
	int n, sum=0 ,c=1, d=9, res=0;
	scanf("%d", &n);	// n 256일 때 
	while(sum+d<n){		// 9보다 큰 숫자들 처리, 99보다 큰 숫자냐 ··· 자리수 확인 
		res = res+(c*d);// 총 개수 
		sum = sum+d;	// 자리수 체크 
		c++;			// 자리수별 개수 
		d = d*10;		
	}
	res = res+((n-sum)*c);
	printf("%d",res);
	
	
	return 0;
}

   
