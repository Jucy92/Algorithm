#include <stdio.h> 
int main() {
	freopen("input.txt","rt",stdin);
	char a[100]; //ASCII 0~9 48~57 A~Z 65~90 a~z 97~122
	char word[100];
	int i, p=0;
	
	gets(a);
//	scanf("%s",&a); // ���� ���� ������ 

	for(i=0; a[i]!='\0';i++){
		if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122)){
			if (a[i]>=65 && a[i]<=90) {
				word[p++]=a[i]+32;
			}else word[p++]=a[i]; // ������ ���� p�� �ְ� ++  

		}
	}
	word[p]='\0'; // ������ ������ ���� ������ �� -> �� ������ ���� 
	printf("%s", word);
	return 0;
	
}
/*       //����� �ڵ� 
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
