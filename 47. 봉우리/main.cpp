#include <stdio.h>
#include <algorithm>		//exit(0) ����ϱ� ����, abs�Լ� ��� 
#include <vector>			//C++ ���̺귯�� 
#include <string.h>
using namespace std;
int a[51][51];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
//	freopen("input.txt", "rt", stdin);
	int n, i, j, k, cnt, flag;
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			flag = 0;
			for(k=0;k<4;k++){
				if(a[i][j] <= a[i+dx[k]][j+dy[k]]) {
					flag=1;
					break;
				}
			}
			if(flag==0) cnt++;
		}
	}printf("%d", cnt);
	
	
	return 0;
}



