#include <stdio.h>
#include <algorithm>		//exit(0) ����ϱ� ����, abs�Լ� ��� 
#include <vector>			//C++ ���̺귯�� 
#include <string.h>
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, j, n, tmp, pos;
	
	scanf("%d",&n);
	vector <int> is(n+1), os(n+1);
	
	for(i=1; i<=n; i++){
		scanf("%d", &is[i]);
	}
	
	for(i=n; i>0; i--){
		pos=i;
		for(j=1; j<=is[i]; j++){		//is[i] = ������ ���� 
			os[pos] = os[pos+1];		//os[pos] ���� �ڸ������ڸ� ���ڸ� �־��ش�. 
			pos++;						//pos++ -> ���ڸ� ���� �ٶ󺻴� 
		}
		os[pos] = i;					//pos �� �����ϸ鼭 ��ġ�� �ٲ� pos=5�϶� 2ȸ �̵��ߴٸ� pos=7�� �̵� ���ڸ��� �ٷ� i(����)�� �־ �� 
	}
	for(i=1; i<=n; i++){
		printf("%d ",os[i]);
	}
	/*												// �߸��� �ڵ�  
	for(i=n-1; i>=0; i--){
		tmp = a[i];
		//for(j=n-1; j>=0; j--){		}
		s[i]=i+1;
		cnt=0;
		for(j=0; j<i; j++){
			if(s[i]<s[j]) cnt++;
			if(cnt!=tmp){
				for(k=i+1; k<n; k++){			//������ �����ε�..? 
					pos = s[k];
					s[k] = s[i];
					s[i] = pos;
				}
			}
		}
		
		if(s[i]==0){
			s[tmp]=i+1;	
		}
	}
	*/
/*											// 4 8 6 2 5 1 3 7  �ش� �ε��� �տ� ū ���ڰ� �ִ��� ���� �ľ� 
	for(i=1; i<n; i++){			
		cnt=0;
		for(j=i-1; j>=0; j--){	//i=3 j=2~0 4 8 6 2 cnt=3
			if(a[i]<a[j]){
				cnt++;
			}
			tmp = a[i];			//tmp=a[1]=8 / tmp=a[3]=2
			b[tmp] = cnt;		//b[8] = 0	 / b[2]=3
		}
	}
	for(i=1; i<=n; i++){
		printf("%d ",b[i]);	
	}
	
*/
	return 0;
}   

