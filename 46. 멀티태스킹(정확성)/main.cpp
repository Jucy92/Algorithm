#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해, abs함수 사용 
#include <vector>			//C++ 라이브러리 
#include <string.h>
using namespace std;

int main() {
//	freopen("input.txt", "rt", stdin);
	int n, s, time=0, bp=0, cp=0, pos=0, tot=0, i;
	
	scanf("%d", &n);
	vector<int> a(n+1);
	for(i=1; i<=n; i++){
		scanf("%d",&a[i]);
		tot+=a[i];
	}
	scanf("%d",&s);
	if(tot<=s) {
		printf("-1");
		return 0;	
	}
	while(1){
		pos++;
		if(pos>n) pos=1;
		//if(a[pos]==0) continue;
		if(a[pos]!=0){
			a[pos]--;
			time++;
		}
		
		if(s==time) break;
	}
	while(1){
		pos++;
		if(a[pos]==0) pos++;
		if(pos>n) pos=1;
		if(a[pos]!=0) break;
	}
	printf("%d",pos);
	
	
	return 0;
}

/*
#include <stdio.h>
//int total;
int AddToTotal(int num){
	static int total;
	total += num;
	return total;
	
}

int maxCheck(int a, int b, int c){
	if(a>b){
	
		return (a>c) ? a:c;
		
	}
	else{
		if(b>c) return b;
		else return c;
	}
}

int main(){
	
	int a,b,c;
//	int num, i;
	
	scanf("%d %d %d", &a, &b, &c);
	printf("가장 큰 숫자는: %d",maxCheck(a,b,c));
//	for(i=0; i<3; i++){
//		printf("입력: %d ",i+1);
//		scanf("%d", &num);
//		printf("누적: %d\n", AddToTotal(num));
//	}
	
	return 0;
}
*/
/*
#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해, abs함수 사용 
#include <vector>			//C++ 라이브러리 
#include <string.h>
using namespace std;
//int a[200001], n;
int n;

int Count(int len, int x[]){
	int i=1, cnt=1, pos=x[1];
	
	for(i=2; i<=n; i++){
		if(x[i]-pos>=len){
			cnt++;
			pos=x[i];
		}
	}
	return cnt;
}

int main(){
	freopen("input.txt", "rt", stdin);
	int m, i, lt=1, rt=0, mid, res, pos, max=-2147000000;
//	int j, tmp;
	int *x = new int[n+1];
	
	scanf("%d %d", &n, &m);
	
	for(i=1; i<=n; i++){
		scanf("%d\n", &x[i]);
	}
	
	/*
	for(i=1; i<=n; i++){
		for(j=i+1; j<=n; j++){
			if(a[i]>a[j]){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
//		printf("%d\n", a[i]);
	}
	*/
	//	rt = a[n+1];
	/*
	sort(x+1, x+n+1);
	
	rt = x[n];

	while(lt<=rt){
		mid = (lt+rt)/2;
		if(Count(mid, x)>=m){
			res=mid;
			lt=mid+1;
		}
		else rt=mid-1;
	}
	printf("%d\n", res);
	delete[] x; 	// 동적 배열 해제 
	
	return 0;
}

*/


