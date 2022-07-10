#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해, abs함수 사용 
#include <vector>			//C++ 라이브러리 
#include <string.h>
using namespace std;

int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int n, i, key, lt, rt, mid;
	scanf("%d %d", &n, &key);
	vector<int> a(n+1);
//	vector<int> a;
	lt=1, rt=n;
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
//		scanf("%d", &tmp);		//14행처럼 선언만 해놓은 경우 
//		a.push_back(tmp);		//동적으로 칸 만들어서 넣고 빠져나옴  
	}
	sort(a.begin(), a.end());
	while(lt<=rt){	// lt는 증가해오고 rt는 감소해오다보면 lt==rt 같아진 이후 -> 교차되는 시점에 종료 
		mid=(lt+rt)/2;
		if(a[mid]==key){
			printf("%d",mid);
			break;
		}
		else if(a[mid]>key) rt= mid-1;
		else if(a[mid]<key) lt= mid+1;
	}
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
