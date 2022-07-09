/*
#include <stdio.h>
#include <algorithm>		//exit(0) ����ϱ� ���� 
#include <vector>			//C++ ���̺귯�� 
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, j, n, tmp;
	
	scanf("%d", &n);
	vector<int> a(n);			//std:: ��ü ���ͼ���
	

	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if(a[j]>0 && a[j+1]<0){
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}
*/

#include<stdio.h>
void Special_Sort(int temp[], int len){
	int i, j, t;
	for(i=0; i<len; i++){
		for(j=0; j<len-i-1; j++){
			if(temp[j]>0 && temp[j+1]<0){
				t=temp[j];
				temp[j]=temp[j+1];
				temp[j+1]=t;
			}
		}	
	}
}

int main(){		//����� ��� 
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	int n, i;
	scanf("%d", &n);
	int *a=new int[n];
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	Special_Sort(a, n);
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	delete[] a;
	return 0;
}
