#include <stdio.h>
#include <algorithm>		//exit(0) ����ϱ� ����, abs�Լ� ��� 
#include <vector>			//C++ ���̺귯�� 
#include <string.h>
using namespace std;

int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, n, m, lt=1, rt=0, mid, res, sum=0, cnt=0;
	scanf("%d %d", &n, &m);
//	vector<int> a(n+1);

	
	for(i=1; i<=n; i++) rt+=i; //rt=45
	
	mid=(lt+rt)/2;		// 23	

	while(lt<=rt){			// lt�� �����ؿ��� rt�� �����ؿ��ٺ��� lt==rt ������ ���� -> �����Ǵ� ������ ���� 

		
		for(i=1; i<=n; i++){
			sum=sum+i;
			if(sum<=mid){
				continue;
			}else {
				sum=0;
				cnt++;
			}
		}
		if(cnt==m){				// <=�� �ϸ�... cnt =1,2 �϶��� �ͼ� res�� �� �ְ� ���������� ������ �߻�  
			cnt = 0;
			res = mid;
			rt  = mid;			// 23�� �Ǵϱ� -1 �ؼ� 1~22���� �Ǵ� ���� �ִ��� üũ  =>  -1 ��� 
			mid=(lt+(rt))/2;
		}
		else if(cnt>m){					// -> mid=11  cnt=5 -> mid ���� 
			cnt = 0;
			lt  = mid+1;		
			mid=(lt+(rt))/2;
		}
//		else {
//			printf("%d", res);
//			return 0;
//		}
	}
	printf("%d",res); // ���Ϲ����� ���� ���� ���������� �ؾ��� 
	return 0; 
	
	
	/*
	int n, m, i, j, pos, tmp;
	
	scanf("%d %d", &n, &m);
	vector <int> a(n+1);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	sort(a.begin(), a.end());
//	for(i=1;i<=n;i++) printf("%d ",a[i]);
	for(i=1; i<=n; i++){
		if(a[i]==m) {
			pos=i;
			break;	
		}
	}
	printf("\n%d",pos);
	
	return 0;
	*/
}
