#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해 
#include <vector>			//C++ 라이브러리 
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, n, pre, now, cnt, max;
	scanf("%d",&n);
	scanf("%d",&pre);
	cnt = max = 1;
	for(i=2;i<=n;i++){
		scanf("%d",&now);
		if(now>=pre){
			cnt++;
			if(cnt>max) max=cnt;
		}
		else cnt=1;
		pre=now;
	}
	printf("%d\n",max);
	
	
	/*
	int i, n, k, cnt=1, max=-2147000000;
	
	scanf("%d", &n);
	std::vector<int> a(n);			//std:: 객체 백터선언 

	for(i=0;i<n;i++){				// 배열에 다 담아놓고 아래서 처리했는데, 강사님은 입력받으면서 처리 
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
	*/
	return 0;
}
	
