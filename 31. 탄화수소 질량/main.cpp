
#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해, abs함수 사용 
#include <vector>			//C++ 라이브러리 
#include <string.h>
using namespace std;
int main(){
//	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, c=0, h=0, pos, res=0;
	char a[10];
	scanf("%s",&a);			

	if(a[1]=='H'){
		c=1;
		pos=1;
	}
	else{
		for(i=1; a[i]!='H'; i++){
			c=c*10+(a[i]-48);
		}
		pos=i;
	}
	if(a[pos+1]=='\0') h=1;
	else{
		for(i=pos+1; a[i]!='\0'; i++){
			h=h*10+(a[i]-48);
		}
	}
	
	printf("%d\n",c*12+h);
//printf("%d\n", strlen(a));
	
	return 0;
}   
