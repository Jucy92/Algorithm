#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해 
int a[60], b[60];
int main(){
	freopen("input.txt", "rt", stdin);
	char n[100];
	int i, cnt=0, res;
	
	scanf("%s",&n);
	for(i=0;n[i]!='\0';i++){
		if(n[i]>=65 && n[i]<=90){	//26개 
//			res=n[i]-64;			// n[0] == A -> '65' - 64 =  res = 1  a[1] = a[1]+1 말이안되네..? 
//			a[res]= a[res]+1;
			a[n[i]-65]++;			// n[0] == A -> '65' - 65 = a[0]++
		}
		else if(n[i]>=97 && n[i]<=122){	
			a[n[i]-71]++;
		}
	}
	
	scanf("%s",&n);
	for(i=0;n[i]!='\0';i++){
		if(n[i]>=65 && n[i]<=90){	
			b[n[i]-65]++;
		}
		else if(n[i]>=97 && n[i]<=122){
			b[n[i]-71]++;		
		}
	}
	
	for(i=0;i<52;i++){
		if(a[i]!=b[i]){
			printf("NO\n");
			exit(0);
		}
	}
	printf("YES\n");
	
	
	return 0;
	
}
	
