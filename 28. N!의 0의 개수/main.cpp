
#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해, abs함수 사용 
#include <vector>			//C++ 라이브러리 
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, j, n, tmp, max=-2147000000;
	scanf("%d",&n);
	vector <int> a(n+1);
	
	for(i=2;i<=n;i++){
		tmp=i;
		j=2;
		while(1){
			if(tmp%j==0){
				a[j]++;
				tmp/=j;
			}else j++;
			if(tmp==1) break;
		}
	}
	/* //강사님은 좀더 간단하면서 명확하게 처리  배열 쓸 필요 없고 변수 2개 cnt1, cnt2 사용 
	while(1){
		if(tmp%j==0){
			if(j==2) cnt1++;
			else if(j==5) cnt2++;
			tmp/=j;
		}
		else j++;
		if(tmp==1) break;
	}
	if(cnt1<cnt2) printf("%d",cnt1);
	else printf("%d", cnt2);
	*/
	printf("%d",a[5]);
	/*
	while(mul>0){	//while(1) 하면서 22행으로 탈출해도됨 
		if(mul%10==0) {
			cnt++;
			if(max<cnt) max=cnt;
		}else cnt=0;
		mul/=10;
//		if(mul==0) break;
		
	}
	printf("%d",max);
	오버플로우 나옴.. 
	*/
	return 0;
}
