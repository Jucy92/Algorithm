#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해 
#include <vector>			//C++ 라이브러리 
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, n, k, sum=0, max=-2147000000;
	
	scanf("%d %d", &n, &k);
	std::vector<int> a(n);			//std:: 객체 백터선언 
	
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<k;i++){				//i=0 ~ i<2 sum = 3+-2=1
		sum += a[i];				//초기 값 저장 
	}
	max=sum;						//1~k까지 합 저장 
	for(i=k;i<n;i++){				//0부터 하면 a[-2], a[-1]=가비지 k부터 
		sum = sum+a[i]-a[i-k];		//i=0 0+3-가비지값<-a[-2] = ?? 
		if(max<sum) max = sum;		 
	}
	printf("%d\n",max);
	

		
	return 0;
}
	
