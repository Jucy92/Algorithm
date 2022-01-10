#include <iostream>
using namespace std;	// 2행 선언하면 5행 std를 생략할 수 있다 
int main() {
	freopen("input.txt","rt",stdin);
	int n, a, i, max=-2147000000, min = 2147000000;
	cin>>n;
	for(i=1; i<=n; i++){
		cin>>a;
		if(max<a) max=a;
		if(min>a) min=a;
	}
	cout<<max-min;
	return 0;
}
