#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해, abs함수 사용 
#include <vector>			//C++ 라이브러리 
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, j, n, cnt=0;
	scanf("%d",&n);
	vector<int> a(n);
	vector<int> b(n); 				// 이거부터 틀렸었네 b(n,1) -> 1로 초기화 하면 안  
	
	/*
	//강사님 코드 					// n = 10이라 할 때 
	for(i=1; i<=n; i++){			// i = 1~10 
		scanf("%d", &a[i]);
	}
	printf("1 ");	
	for(i=2; i<=n; i++){			// i = 2 ~ 10 됨 
		cnt=0;
		for(j=i-1; j>=1; j--){		// j = 2-1->1 
			if(a[j]>=a[i]) cnt++;	// a[1] >= a[2] -> 15 >= 12
		}
		printf("%d ", cnt+1);
	}
	*/
		
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}	

//	/*  
	for(i=0;i<n;i++){ 				// 0부터 시작할꺼면 n까지 하고 0<n -> a[0]~a[n-1] 
		for(j=i;j>=0;j--){			// 본인 자리부터 맨 처음까지 체크 -> j=i-1 할 경우 i가 0부터 시작하기 때문에 오류 ( i[-1] 초기화 및 값 X )
			if(a[i] <= a[j]){		// 본인자리 보다 큰 값이 없으면(다이길수 있으면) 본인이 1등이니깐 ++해줘야한다 그래서 =를 써줌
				b[i]++;				// -------> 처음에 생긴 문제는 자기보다 큰 값이 없으면 1등이니깐 기본 값 1줬는데, 앞에 큰 값이 있어도 1이 더 들어감 
			}
		}
		printf("%d ",b[i]);
	}
//	*/
	
	return 0;
}

/*  //강사님의 병합정렬

#include<bits/stdc++.h>
using namespace std;
struct Data{
	int idx, speed, rank;	
};

vector<Data> a(500000), tmp(500000);
int res[500000];

void divide(int lt, int rt){
	int mid;
	int p1, p2, p3;
	if(lt<rt){
		mid=(lt+rt)/2;
		divide(lt, mid);
		divide(mid+1, rt);
		p1=lt;
		p2=mid+1;
		p3=lt;
		while(p1<=mid && p2<=rt){
			if(a[p1].speed<a[p2].speed) tmp[p3++]=a[p1++];
			else{
				tmp[p3]=a[p2++];
				tmp[p3].rank+=mid-p1+1;
				p3++;
			}
		}
		while(p1<=mid) tmp[p3++]=a[p1++];
		while(p2<=rt) tmp[p3++]=a[p2++];
		
		for(int i=lt; i<=rt; i++){
			a[i]=tmp[i];
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	//freopen("input.txt", "rt", stdin);
	int n, t;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i].speed;
		a[i].idx=i;
		a[i].rank=0;	
	} 
	divide(0, n-1);
	for(int i=0; i<n; i++){
		res[a[i].idx]=a[i].rank+1;
	}
	for(int i=0; i<n; i++){
		cout<<res[i]<<"\n";
	}
	return 0;
}
 

*/
	
