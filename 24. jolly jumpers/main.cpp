#include <stdio.h>
#include <algorithm>		//exit(0) ����ϱ� ����, abs�Լ� ��� 
#include <vector>			//C++ ���̺귯�� 
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
	
