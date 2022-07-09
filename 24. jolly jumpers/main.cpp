#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해, abs함수 사용 
#include <vector>			//C++ 라이브러리 
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, n, pre, now, res, max;
	scanf("%d",&n);
	vector<int> a(n);
	scanf("%d",&pre);
	
	for(i=1;i<n;i++){
		scanf("%d",&now);
		res = abs(pre-now);
		if(res>0 && res<n && a[res]==0) a[res]++;
		else {
			printf("NO\n");
			return 0;
		}
		pre = now;
	}
	printf("YES\n");
	return 0;
}
	
