#include <stdio.h>
#include <algorithm>		//exit(0) ����ϱ� ����, abs�Լ� ��� 
#include <vector>			//C++ ���̺귯�� 
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, j, n, max=-2147000000;
	scanf("%d",&n);
	vector<int> a(n);
	vector<int> b(n,1);
		
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i] < a[j]){
				b[i]++;
			}
		}
		printf("%d ",b[i]);
	}
	
	
	return 0;
}
	
