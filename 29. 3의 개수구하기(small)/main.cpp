
#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해, abs함수 사용 
#include <vector>			//C++ 라이브러리 
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, n, tmp, cnt=0;
	scanf("%d",&n);			// n = 999999992 -> 24초 
	
	for(i=1;i<=n;i++){
		tmp=i;
		while(1){
			if(tmp%10==3) cnt++;
			tmp = tmp/10;
			if(tmp==0) break;
		}
	}
	printf("%d",cnt);
	
	
	return 0;
}
