#include <stdio.h>
#include <algorithm>		//exit(0) ����ϱ� ����, abs�Լ� ��� 
#include <vector>			//C++ ���̺귯�� 
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, j, n, cnt=0;
	scanf("%d",&n);
	vector<int> a(n);
	vector<int> b(n); 				// �̰ź��� Ʋ�Ⱦ��� b(n,1) -> 1�� �ʱ�ȭ �ϸ� ��  
	
	/*
	//����� �ڵ� 					// n = 10�̶� �� �� 
	for(i=1; i<=n; i++){			// i = 1~10 
		scanf("%d", &a[i]);
	}
	printf("1 ");	
	for(i=2; i<=n; i++){			// i = 2 ~ 10 �� 
		cnt=0;
		for(j=i-1; j>=1; j--){		// j = 2-1->1 
			if(a[j]>=a[i]) cnt++;	// a[1] >= a[2] -> 15 >= 12
		}
		printf("%d ", cnt+1);
	}
	*/
		
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}	

//	/*  
	for(i=0;i<n;i++){ 				// 0���� �����Ҳ��� n���� �ϰ� 0<n -> a[0]~a[n-1] 
		for(j=i;j>=0;j--){			// ���� �ڸ����� �� ó������ üũ -> j=i-1 �� ��� i�� 0���� �����ϱ� ������ ���� ( i[-1] �ʱ�ȭ �� �� X )
			if(a[i] <= a[j]){		// �����ڸ� ���� ū ���� ������(���̱�� ������) ������ 1���̴ϱ� ++������Ѵ� �׷��� =�� ����
				b[i]++;				// -------> ó���� ���� ������ �ڱ⺸�� ū ���� ������ 1���̴ϱ� �⺻ �� 1��µ�, �տ� ū ���� �־ 1�� �� �� 
			}
		}
		printf("%d ",b[i]);
	}
//	*/
	
	return 0;
}

/*  //������� ��������

#include<bits/stdc++.h>
using namespace std;
struct Data{
	int idx, speed, rank;	
};

vector<Data> a(500000), tmp(500000);
int res[500000];

void divide(int lt, int rt){
	int mid;
	int p1, p2, p3;
	if(lt<rt){
		mid=(lt+rt)/2;
		divide(lt, mid);
		divide(mid+1, rt);
		p1=lt;
		p2=mid+1;
		p3=lt;
		while(p1<=mid && p2<=rt){
			if(a[p1].speed<a[p2].speed) tmp[p3++]=a[p1++];
			else{
				tmp[p3]=a[p2++];
				tmp[p3].rank+=mid-p1+1;
				p3++;
			}
		}
		while(p1<=mid) tmp[p3++]=a[p1++];
		while(p2<=rt) tmp[p3++]=a[p2++];
		
		for(int i=lt; i<=rt; i++){
			a[i]=tmp[i];
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	//freopen("input.txt", "rt", stdin);
	int n, t;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i].speed;
		a[i].idx=i;
		a[i].rank=0;	
	} 
	divide(0, n-1);
	for(int i=0; i<n; i++){
		res[a[i].idx]=a[i].rank+1;
	}
	for(int i=0; i<n; i++){
		cout<<res[i]<<"\n";
	}
	return 0;
}
 

*/
	
