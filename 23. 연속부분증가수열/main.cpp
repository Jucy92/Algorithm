#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해 
#include <vector>			//C++ 라이브러리 
int main(){
//	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, n, k, cnt=1, max=-2147000000;
	
	scanf("%d", &n);
	std::vector<int> a(n);			//std:: 객체 백터선언 

	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]<=a[i+1]) cnt++;
		else {
//			printf("max=%d cnt=%d\n",max, cnt);
			if(max<cnt){
				max = cnt;
			}
			cnt = 1;
		}
	}
	printf("%d",max);
	
	return 0;
}
	
