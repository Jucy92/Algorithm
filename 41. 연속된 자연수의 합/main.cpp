	
#include <stdio.h>
#include <algorithm>		//exit(0) ����ϱ� ����, abs�Լ� ��� 
#include <vector>			//C++ ���̺귯�� 
#include <string.h>
using namespace std;
int a[101], b[101], c[300];
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int a, b=1, cnt=0, tmp, i;
	
	scanf("%d", &a);	// a = 15
	tmp=a;
	a--;				// 14
	while(a>0){		
		b++;			// 2
		a=a-b;			// 14-2=12
		if(a%b==0){		// 12%2==0
			for(i=1; i<b; i++){
				printf("%d + ", (a/b)+i);
			}
			printf("%d = %d\n", (a/b)+i, tmp);
			cnt++;
		}
	}
	printf("%d\n", cnt);


	/*							// �ٿ��ٿ� �������� �ߴµ� 7 + 8 = 15 ���� �κ��� �ȵȴ�.. ���͵� �ٿ����� ������.. ������ + ������ = ����ָ� �Ǳ��ҰŰ�����.. ��� 
	int i, j, k, l, n, sum, plus;
	
	scanf("%d",&n);
	vector<int> a[n];
	

	for(i=1; i<=n; i++){
		
		for(j=1; j<=i+1; j++){
			sum+=j;
			a[j] = j;
			if((n-sum)%j==0){
				plus=(n-sum)/j;
			}
		}
		sum=0;
		for(k=1; k<=i+1; k++){
			a[k]+=plus;
			sum+=a[k];
		}
		for(l=1; l<=i+1; l++){
			if(sum==n){	
				printf("%d + %d = %d", a[l])
			}
		}
		
		
	}
	*/

	return 0;
}
