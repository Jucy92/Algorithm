#include <stdio.h>
#include <algorithm>		//exit(0) ����ϱ� ����, abs�Լ� ��� 
#include <vector>			//C++ ���̺귯�� 
#include <string.h>
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, j, n, num, tmp, cnt=0, idx;
	
	scanf("%d",&n);
	vector <int> a(n);
	
	for(i=0; i<n; i++){
		scanf("%d",&num);
		a[i]=num;
	}
	
	for(i=0; i<n; i++){
		idx = i;
		for(j=i+1; j<n; j++){
			if(a[j]>a[idx]) idx=j;	//�Ź� ���� �������� ���� �� ������ 1���� ����ó�� 
		}
		tmp = a[i];
		a[i] = a[idx];
		a[idx] = tmp;
	}
	
	for(i=1; i<n; i++) {
		if(a[i-1]!=a[i]) cnt++;
		if(cnt==2){
			printf("%d\n",a[i]);
			break;
		}
	}

	return 0;
}   
