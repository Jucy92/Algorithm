
#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해, abs함수 사용 
#include <vector>			//C++ 라이브러리 
#include <string.h>
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, j, n, num, tmp;
	
	scanf("%d",&n);
	vector <int> a(n);
	
	for(i=0; i<n; i++){
		scanf("%d",&num);
		a[i]=num;
	}
	
	for(i=1; i<n; i++){
		tmp=a[i];				// 확인 할 숫자 tmp에 저장 					13 23 11 7 5 15
		for(j=i-1; j>=0; j--){	// 기준 숫자보다 앞쪽으로 가면서 체크 
			if(tmp<a[j]){		// tmp보다 크면  
				a[j+1]=a[j];	// 확인한 자리 뒤에 숫자 저장 후 j-- / j=0일 경우 j--후 j=-1  
			}else break; 		// j=0일 때 tmp < a[0] 거짓일 경우 j-- 없이 break -> j=0 그대로 
		}
		a[j+1]=tmp;				// tmp < a[n] 이 참일 경우 j = n-1 ->  / 거짓일 경우 j = n 
	}
	
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	

	return 0;
}   

