#include <stdio.h>
#include <algorithm>		//exit(0) ����ϱ� ���� 
#include <vector>			//C++ ���̺귯�� 
int main(){
//	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, n, k, cnt=1, max=-2147000000;
	
	scanf("%d", &n);
	std::vector<int> a(n);			//std:: ��ü ���ͼ��� 

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
	
