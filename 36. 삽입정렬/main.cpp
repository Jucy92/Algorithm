
#include <stdio.h>
#include <algorithm>		//exit(0) ����ϱ� ����, abs�Լ� ��� 
#include <vector>			//C++ ���̺귯�� 
#include <string.h>
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, j, n, num, tmp;
	
	scanf("%d",&n);
	vector <int> a(n);
	
	for(i=0; i<n; i++){
		scanf("%d",&num);
		a[i]=num;
	}
	
	for(i=1; i<n; i++){
		tmp=a[i];				// Ȯ�� �� ���� tmp�� ���� 					13 23 11 7 5 15
		for(j=i-1; j>=0; j--){	// ���� ���ں��� �������� ���鼭 üũ 
			if(tmp<a[j]){		// tmp���� ũ��  
				a[j+1]=a[j];	// Ȯ���� �ڸ� �ڿ� ���� ���� �� j-- / j=0�� ��� j--�� j=-1  
			}else break; 		// j=0�� �� tmp < a[0] ������ ��� j-- ���� break -> j=0 �״�� 
		}
		a[j+1]=tmp;				// tmp < a[n] �� ���� ��� j = n-1 ->  / ������ ��� j = n 
	}
	
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	

	return 0;
}   

