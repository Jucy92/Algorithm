#include <stdio.h>
#include <algorithm>		//exit(0) ����ϱ� ����, abs�Լ� ��� 
#include <vector>			//C++ ���̺귯�� 
#include <string.h>
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, j, n, num, tmp, res=0, idx;
	
	scanf("%d",&n);
	vector <int> a(n);
	
	for(i=0; i<n; i++){
		scanf("%d",&num);
		a[i]=num;
	}
	
	/*
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(a[i]>a[j]){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
		printf("%d ",a[i]);
	}
	*/
	for(i=0; i<n; i++){
		idx = i;
		for(j=i+1; j<n; j++){
			if(a[j]<a[idx]) idx=j;	//�Ź� ���� �������� ���� �� ������ 1���� ����ó�� 
		}
		tmp = a[i];
		a[i] = a[idx];
		a[idx] = tmp;
		printf("%d ",a[i]);
	}

	return 0;
}   
