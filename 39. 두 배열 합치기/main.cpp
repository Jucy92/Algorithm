#include <stdio.h>
#include <algorithm>		//exit(0) ����ϱ� ����, abs�Լ� ��� 
#include <vector>			//C++ ���̺귯�� 
#include <string.h>
using namespace std;
//int a[101], b[101], c[300];
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, n, m, p1=1, p2=1, p3=1;
	//vector <int> a(n), b(m), c(n+m); // ���Ϳ��� n+m, sum=n+m ��  sum �� �ʱ�ȭ�� ������ ���� �۾� x --------> ����... n, m �Է� �ޱ� ���� �����ؼ� ���� ����.. 
	
	//printf("%d", sizeof(d)/sizeof(int));
	
	scanf("%d",&n);
	vector <int> a(n);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}

	scanf("%d",&m);
	vector <int> b(m), c(n+m);
	for(i=1; i<=m; i++){
		scanf("%d", &b[i]);
	}
	
	
	while(p1<=n && p2<=m){			// a[n], b[m] �� �� �ϳ��� ������ �ε����� ���� ������ ����, �׷� �ٸ� �迭�� ������ ���鵵 ó��������� 
		if(a[p1]<b[p2]){
			c[p3++]=a[p1++];
		}else {						//a[p1] > b[p2] �̰ų� a[p1] == b[p2]
			c[p3++]=b[p2++];
		}
	}
	while(p1<=n) c[p3++]=a[p1++];	//p1<=n -> p1�� n���� ���� ������ ��� -> 21�࿡�� p2�� ���� ���� ��, -> a�迭�� ���� ������ �� c�迭�� �־��ش�. 
	while(p2<=m) c[p3++]=b[p2++];	//p2<=m -> p2�� m���� ���� ������ ��� -> 21�࿡�� p1�� ���� ���� ��, -> b�迭�� ���� ������ �� c�迭�� �־��ش�.
	
	
	
	for(i=1; i<p3; i++){
		printf("%d ", c[i]);
	}
//	for(i=1; i<=n; i++){
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for(i=1; i<=m; i++){
//		printf("%d ", b[i]);
//	}
//	printf("\n");
//	for(i=1; i<=n+m; i++){
//		printf("%d ", c[i]);
//	}
	
	
	return 0;
}   

