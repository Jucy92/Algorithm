#include <stdio.h>
#include <algorithm>		//exit(0) ����ϱ� ���� 
#include <vector>			//C++ ���̺귯�� 
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, n, k, sum=0, max=-2147000000;
	
	scanf("%d %d", &n, &k);
	std::vector<int> a(n);			//std:: ��ü ���ͼ��� 
	
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<k;i++){				//i=0 ~ i<2 sum = 3+-2=1
		sum += a[i];				//�ʱ� �� ���� 
	}
	max=sum;						//1~k���� �� ���� 
	for(i=k;i<n;i++){				//0���� �ϸ� a[-2], a[-1]=������ k���� 
		sum = sum+a[i]-a[i-k];		//i=0 0+3-��������<-a[-2] = ?? 
		if(max<sum) max = sum;		 
	}
	printf("%d\n",max);
	

		
	return 0;
}
	
