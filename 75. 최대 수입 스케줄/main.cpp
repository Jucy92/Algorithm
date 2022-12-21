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
	bool operator<(Data &b){	// ���� ���� 
		return when>b.when;		// when-> this / b.when �ð������� �տ��� ū ����  1�� �����Ѵ� -> �������� ???
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
		if(D>max){	// �ִ� ������ �����ٸ� �ϱ� ���� 
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

