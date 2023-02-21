#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int m, res=2147000000, ch[20], sum, dis;
vector <pair <int, int> > P;
vector <pair <int, int> > H;
void DFS(int L, int v){
	if(L==m){
		int x1,x2,y1,y2;
		sum=0;
		for(int i=0; i<H.size(); i++){
			x1=H[i].first;
			y1=H[i].second;
			dis=2147000000;
			for(int j=0; j<m; j++){
				x2=P[ch[j]].first;
				y2=P[ch[j]].second;
				if(dis>(abs(x1-x2)+abs(y1-y2))){
					dis=(abs(x1-x2)+abs(y1-y2));
				}	
				
			}
			sum+=dis;
		}
		if(sum<res) res=sum; 
	}else{
		for(int i=v; i<P.size(); i++){
			ch[L]=i;
			DFS(L+1, i+1);
		}
	}
}
int main(){
//	freopen("input.txt", "rt", stdin);
	int n, i, j, a;
	scanf("%d %d", &n, &m);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a);
			if(a==1) H.push_back(make_pair(i,j));
			else if (a==2) P.push_back(make_pair(i,j));
		}
	}
	DFS(0,0);
	printf("%d", res);
	return 0;	
}

