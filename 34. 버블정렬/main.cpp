
#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해, abs함수 사용 
#include <vector>			//C++ 라이브러리 
#include <string.h>
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, j, n, num, tmp;
	
	scanf("%d",&n);
	vector <int> a(n);
	
	for(i=0; i<n; i++){
		scanf("%d",&num);
		a[i]=num;
	}
	
	for(i=0; i<n-1; i++){
		
		for(j=0; j<n-i-1; j++){	// i = 0 일 때 마지막 전까지는 돌필요가 없다. 아래 if문에서 비교하고 크다면 값을 변경 했음 
			if(a[j]>a[j+1]){	
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
	
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	

	return 0;
}   

