#include <stdio.h> 
int main() {
	freopen("input.txt","rt",stdin);
	char a[50]; //ASCII 0~9 48~57 A~Z 65~90 a~z 97~122
	int i, res=0, cnt=0;
	scanf("%s",&a);

	for(i=0; a[i]!='\0';i++){
		if(a[i]>=48 && a[i]<=57){

			res=res*10+(a[i]-48); 
		}
	}
	printf("%d\n",res);
	for(i=1; i<=res; i++){
		if(res%i==0) cnt++;
	}
	printf("%d\n",cnt);
	
	
	return 0;
}
