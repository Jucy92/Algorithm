#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해, abs함수 사용 
#include <vector>			//C++ 라이브러리 
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
		for(j=1; j<=is[i]; j++){		//is[i] = 숫자의 개수 
			os[pos] = os[pos+1];		//os[pos] 현재 자리에뒷자리 숫자를 넣어준다. 
			pos++;						//pos++ -> 뒷자리 숫자 바라본다 
		}
		os[pos] = i;					//pos 값 증가하면서 위치가 바뀜 pos=5일때 2회 이동했다면 pos=7로 이동 그자리에 바로 i(숫자)를 넣어도 됨 
	}
	for(i=1; i<=n; i++){
		printf("%d ",os[i]);
	}
	/*												// 잘못된 코드  
	for(i=n-1; i>=0; i--){
		tmp = a[i];
		//for(j=n-1; j>=0; j--){		}
		s[i]=i+1;
		cnt=0;
		for(j=0; j<i; j++){
			if(s[i]<s[j]) cnt++;
			if(cnt!=tmp){
				for(k=i+1; k<n; k++){			//이쪽이 문제인듯..? 
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
/*											// 4 8 6 2 5 1 3 7  해당 인덱스 앞에 큰 숫자가 있는지 개수 파악 
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

