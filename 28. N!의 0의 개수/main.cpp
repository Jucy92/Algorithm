
#include <stdio.h>
#include <algorithm>		//exit(0) ����ϱ� ����, abs�Լ� ��� 
#include <vector>			//C++ ���̺귯�� 
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, j, n, tmp, max=-2147000000;
	scanf("%d",&n);
	vector <int> a(n+1);
	
	for(i=2;i<=n;i++){
		tmp=i;
		j=2;
		while(1){
			if(tmp%j==0){
				a[j]++;
				tmp/=j;
			}else j++;
			if(tmp==1) break;
		}
	}
	/* //������� ���� �����ϸ鼭 ��Ȯ�ϰ� ó��  �迭 �� �ʿ� ���� ���� 2�� cnt1, cnt2 ��� 
	while(1){
		if(tmp%j==0){
			if(j==2) cnt1++;
			else if(j==5) cnt2++;
			tmp/=j;
		}
		else j++;
		if(tmp==1) break;
	}
	if(cnt1<cnt2) printf("%d",cnt1);
	else printf("%d", cnt2);
	*/
	printf("%d",a[5]);
	/*
	while(mul>0){	//while(1) �ϸ鼭 22������ Ż���ص��� 
		if(mul%10==0) {
			cnt++;
			if(max<cnt) max=cnt;
		}else cnt=0;
		mul/=10;
//		if(mul==0) break;
		
	}
	printf("%d",max);
	�����÷ο� ����.. 
	*/
	return 0;
}
