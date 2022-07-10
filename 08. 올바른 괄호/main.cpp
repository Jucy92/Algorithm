#include <stdio.h> 
int main() {
//	freopen("input.txt","rt",stdin);
	char a[30]; //ASCII 0~9 48~57 A~Z 65~90 a~z 97~122 (,) 40,41
	int cnt=0,i;
	scanf("%s",&a);
	
	for(i=0;a[i]!='\0';i++) {
//		if(a[i]==40) {
		if(a[i]=='(') {
			cnt++; 
		}
//		else if(a[i]==41){
		else if(a[i]==')'){
			cnt--;
			if(cnt<0){
				break; 
			}
		
		}
		 
	}
	if (cnt == 0){
		printf("YES");
	}else printf("NO");
	
	return 0;
	
}

