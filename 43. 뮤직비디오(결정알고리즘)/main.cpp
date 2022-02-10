#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해, abs함수 사용 
#include <vector>			//C++ 라이브러리 
#include <string.h>
using namespace std;

int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, n, m, lt=1, rt=0, mid, res, sum=0, cnt=0;
	scanf("%d %d", &n, &m);
//	vector<int> a(n+1);

	
	for(i=1; i<=n; i++) rt+=i; //rt=45
	
	mid=(lt+rt)/2;		// 23	

	while(lt<=rt){			// lt는 증가해오고 rt는 감소해오다보면 lt==rt 같아진 이후 -> 교차되는 시점에 종료 

		
		for(i=1; i<=n; i++){
			sum=sum+i;
			if(sum<=mid){
				continue;
			}else {
				sum=0;
				cnt++;
			}
		}
		if(cnt==m){				// <=로 하면... cnt =1,2 일때도 와서 res에 값 넣고 나눠버리는 문제가 발생  
			cnt = 0;
			res = mid;
			rt  = mid;			// 23은 되니깐 -1 해서 1~22에서 되는 수가 있는지 체크  =>  -1 취소 
			mid=(lt+(rt))/2;
		}
		else if(cnt>m){					// -> mid=11  cnt=5 -> mid 증가 
			cnt = 0;
			lt  = mid+1;		
			mid=(lt+(rt))/2;
		}
//		else {
//			printf("%d", res);
//			return 0;
//		}
	}
	printf("%d",res); // 와일문에서 조건 만들어서 빠져나오게 해야함 
	return 0; 
	
	
	/*
	int n, m, i, j, pos, tmp;
	
	scanf("%d %d", &n, &m);
	vector <int> a(n+1);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	sort(a.begin(), a.end());
//	for(i=1;i<=n;i++) printf("%d ",a[i]);
	for(i=1; i<=n; i++){
		if(a[i]==m) {
			pos=i;
			break;	
		}
	}
	printf("\n%d",pos);
	
	return 0;
	*/
}
