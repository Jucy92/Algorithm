
#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해, abs함수 사용 
#include <vector>			//C++ 라이브러리 
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, n, lt=1, cur, rt, k=1, res=0;
	scanf("%d",&n);			// n = 999999992 -> 24초 

//	i = n;
	while(lt!=0){
		rt = n%k;
//		cur = i%10;
		cur = (n/k)%10;		//cur 구할 때 값을 나눠줄 필요 없이 이렇게 해결...할 수도 있구나.. 
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
