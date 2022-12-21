#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

struct Data{
	int money, when;
	Data(int a, int b){
		money=a;
		when=b;
	}
	bool operator<(Data &b){	// 정렬 기준 
		return when>b.when;		// when-> this / b.when 시간순으로 앞에꺼 큰 값을  1로 정렬한다 -> 내림차순 ???
	}
	
};
int main(){
//	freopen("input.txt", "rt", stdin);
	int N, D, M, i, j, res, max=-2147000000;
	vector<Data> T; 
	vector<pair<int, int> > P;
	priority_queue<int> pQ;
	scanf("%d", &N);
	
	for(i=1; i<=N; i++){
		scanf("%d %d", &M, &D);
		T.push_back(Data(M, D));
//		P.push_back(pair(M, D));
		if(D>max){	// 최대 값으로 스케줄링 하기 위해 
			max=D;	
		}
	}
	sort(T.begin(), T.end());
	j=0;
	for(i=max; i>=1; i--){
		for( ; j<N; j++){ 
			if(T[j].when<i) break;
			pQ.push(T[j].money);
		}
		if(!pQ.empty()){
			res+=pQ.top();
			pQ.pop();
		}
	}
	printf("%d\n", res);
	
	
	return 0;
}

