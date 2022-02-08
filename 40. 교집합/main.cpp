	/*
#include <stdio.h>
#include <algorithm>		//exit(0) ����ϱ� ����, abs�Լ� ��� 
#include <vector>			//C++ ���̺귯�� 
#include <string.h>
using namespace std;
int a[101], b[101], c[300];
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	
	int i, j, n, m, p1=0, p2=0, p3=0, tmp, idx;
	
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}

	scanf("%d",&m);
	for(i=1; i<=m; i++){
		scanf("%d", &b[i]);
	}
	
	for(i=1; i<=n; i++){			//�������� 
		idx=i;
		for(j=i+1; j<=n; j++){		// n=5�� �� i������ 5 j������ j=5+1 6<=5 �������� �������� 
			if(a[idx]>a[j]) idx=j;	//�ݺ��� ���鼭 ���� ���ڸ� idx�� �ְ�, �־��� ���� ���ڶ� ���� �����̶� ���ϸ鼭 �� ���� ���� ������ ���� 
		}
		tmp=a[i];
		a[i]=a[idx];
		a[idx]=tmp;
//		printf("%d ",a[i]);
	}
	
//	printf("\n");
	for(i=1; i<=m-1; i++){			//�������� 
		for(j=1; j<=m-i; j++){		//1���� ���ϱ� m-i-1 �ϸ� ó������ m-2���� ��.. �Ǹ������� ó�����ϱ� ������ m-i-1�� �ƴϰ� m-i�� �ۼ� 
			if(b[j]>b[j+1]){
				tmp=b[j];
				b[j]=b[j+1];
				b[j+1]=tmp;
			}
		}
	}
	while(p1<=n && p2<=m){		// ������ �� üũ ���ϰ� p1=n �ż� ���� 
		if(a[p1]<b[p2])  a[p1++];
		else if (a[p1]>b[p2]) b[p2++];
		else {
//			printf("p1=%d, p2=%d, p3=%d\n", p1, p2, p3);
			c[p3++]=a[p1++];
			b[p2++];
		}
	}
	for(i=1; i<p3; i++){
		printf("%d ",c[i]);
	}
	
	return 0;
}   
	*/
	
	
	/************ ����� �ڵ� ************/
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
	int n, m, i, p1=0, p2=0, p3=0;
	scanf("%d", &n);
	vector<int> a(n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	sort(a.begin(), a.end());
	
	scanf("%d", &m);
	vector<int> b(m), c(n+m);
	for(i=0; i<m; i++){
		scanf("%d", &b[i]);
	}
	sort(b.begin(), b.end());
	
	while(p1<n && p2<m){
		if(a[p1]==b[p2]){
			c[p3++]=a[p1++];
			p2++;
		}
		else if(a[p1]<b[p2]){
			p1++;
		}
		else p2++;
	}
	for(i=0; i<p3; i++){
		printf("%d ", c[i]);
	}
	return 0;
}
