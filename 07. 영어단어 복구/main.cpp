#include <stdio.h> 
int main() {
	freopen("input.txt","rt",stdin);
	char a[100]; //ASCII 0~9 48~57 A~Z 65~90 a~z 97~122
	char word[100];
	int i, p=0;
	
	gets(a);
//	scanf("%s",&a); // 공백 문자 못읽음 

	for(i=0; a[i]!='\0';i++){
		if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122)){
			if (a[i]>=65 && a[i]<=90) {
				word[p++]=a[i]+32;
			}else word[p++]=a[i]; // 마지막 공간 p에 넣고 ++  

		}
	}
	word[p]='\0'; // 마지막 공간은 지금 가비지 값 -> 널 값으로 지정 
	printf("%s", word);
	return 0;
	
}
/*       //강사님 코드 
#include<stdio.h>
using namespace std;
int main(){
	//freopen("input.txt", "rt", stdin);
	char a[101], b[101];
	int i, p=0;
	gets(a);
	for(i=0; a[i]!='\0'; i++){
		if(a[i]!=' '){
			if(a[i]>=65 && a[i]<=90){
				b[p++]=a[i]+32;
			}
			else b[p++]=a[i];
		}
	}
	b[p]='\0';
	printf("%s\n", b);	
	return 0;
}
*/
