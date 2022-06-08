#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해, abs함수 사용 
#include <vector>			//C++ 라이브러리 
#include <string.h>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	
	int n, s, pos=0, chk=0, cnt=0, i;
	 
	scanf("%d %d", &n, &s);
	vector<int> a(n+1);
	
	while(1){
		pos++;	
		if(pos>n) pos=1;
		if(a[pos]==0){
			chk++;
			if(s==chk){
				a[pos]=1;
				cnt++;
				chk=0;	
			}
			
		}
		if(cnt==n-1) break;
	}
	for(i=1;i<=n;i++){
		if(a[i]==0) printf("%d",i);	
	}
	
	
	
	return 0;
}
