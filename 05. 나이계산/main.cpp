//#include <iostream> -> cin cout 사용 시 cpp
#include <stdio.h> 
using namespace std;	// 2행 선언하면 5행 std를 생략할 수 있다 
int main() {
	freopen("input.txt","rt",stdin);
	char a[20];
	int year, age;
	scanf("%s",&a);
	
	if(a[7]=='1' || a[7]=='2') {
		year=1900+((a[0]-48)*10+(a[1]-48));
	}else year=1900+((a[0]-48)*10+(a[1]-48));
	age=2019-year+1;
	printf("%d ",age);
	if(a[7]=='1' || a[7]=='3') printf("M\n");
	else printf("W\n");
	return 0;
}
