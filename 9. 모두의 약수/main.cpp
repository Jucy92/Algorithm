#include <stdio.h> 
int cnt[50001]; // ���������� 0���� �ʱ�ȭ�� �ȴ�. 
int main() {
//	freopen("input.txt","rt",stdin);
	

	int n, i, j;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(j=i; j<=n; j=j+i){
			cnt[j]++;
		}
	}
	for(i=1; i<=n; i++){
		printf("%d ",cnt[i]);
	}
	
	/*
	int n, cnt,i,j;	
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		cnt = 0;
		for(j=1;j<=i;j++){
			if(i%j==0){	
				cnt++;
				
			
			}
		}
		printf("%d ",cnt);
	}
	*/
	return 0;
	
}

