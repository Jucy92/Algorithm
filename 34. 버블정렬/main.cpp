
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
	
	for(i=0; i<n-1; i++){
		
		for(j=0; j<n-i-1; j++){	// i = 0 �� �� ������ �������� ���ʿ䰡 ����. �Ʒ� if������ ���ϰ� ũ�ٸ� ���� ���� ���� 
			if(a[j]>a[j+1]){	
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
	
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	

	return 0;
}   

