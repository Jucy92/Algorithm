#include <stdio.h>
#include <algorithm>		//exit(0) ����ϱ� ���� 
#include <vector>			//C++ ���̺귯�� 
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
	std::vector<int> a(n);			//std:: ��ü ���ͼ��� 

	for(i=0;i<n;i++){				// �迭�� �� ��Ƴ��� �Ʒ��� ó���ߴµ�, ������� �Է¹����鼭 ó�� 
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
	
