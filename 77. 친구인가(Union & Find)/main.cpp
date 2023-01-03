#include<stdio.h>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;	
int unf[1001];
int Find(int x){
	if(x==unf[x]) return x;
	else{
		return unf[x] = Find(unf[x]);
	}
}

int Union(int a, int b){
	a=Find(a);
	b=Find(b);
	if(a!=b) unf[a]=b;
}

int main(){
	freopen("input.txt", "rt", stdin);
	int n, m, i, a, b, fa, fb;
	scanf("%d %d", &n, &m);
	
	for(i=1; i<=n; i++){
		unf[i]=i;
	}
	for(i=1; i<=m; i++){
		scanf("%d %d", &a, &b);
		Union(a, b);
	}
	scanf("%d %d", &a, &b);
	fa=Find(a);
	fb=Find(b);
	if(fa==fb) printf("YES\n");
	else printf("NO\n");
	
	
	return 0;
}
