
#include <stdio.h>
#include <algorithm>		//exit(0) ����ϱ� ����, abs�Լ� ��� 
#include <vector>			//C++ ���̺귯�� 
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, n, lt=1, cur, rt, k=1, res=0;
	scanf("%d",&n);			// n = 999999992 -> 24�� 

//	i = n;
	while(lt!=0){
		rt = n%k;
//		cur = i%10;
		cur = (n/k)%10;		//cur ���� �� ���� ������ �ʿ� ���� �̷��� �ذ�...�� ���� �ֱ���.. 
		lt = n/(k*10);
		if(cur>3) res+= ((lt+1)*k);
		else if (cur<3) res+= (lt*k);
		else res+= (lt*k+(rt+1));
		
//		i=i/10;
		k*=10;
	}
	printf("%d\n",res);
	return 0;
}   
