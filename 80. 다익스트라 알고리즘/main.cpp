#include<stdio.h>
#include<vector>
#include<algorithm>
#define x first
#define y second
using namespace std;	
int ch[30], dist[30], sum;
vector<pair<int, int> > map[30];

int DFS(int v, int b, int sum){
	int i;
	if(v==b) return 0;// �ٿ� �Ϸ���..  DFS(1,v,sum)���� �ؼ� if (v==i+1���� �ϸ鼭 �ϸ�Ƿ���.. 
	else{
		for(i=0; i<map[b].size(); i++){
			DFS(b+1, v, sum+map[b][i].x);	
		}
		return 0;
	}
}

int main(){
	freopen("input.txt", "rt", stdin);
	int n, m, i, a, b, c;
	scanf("%d %d", &n, &m);
	
	for(i=1; i<=m; i++){
		scanf("%d %d %d", &a, &b, &c);
		map[a].push_back(make_pair(b,c));
	} 
	for(i=2;i<=n;i++){
		sum=0;
//		DFS(i, 1, sum);	// ��ͷ� ó�� ����
		// ������ �����ְ�.. map���� 1������ �������� �� ������ ����� ��� ������  
	}
	
	return 0;
}

