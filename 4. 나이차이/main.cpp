#include <iostream>
using namespace std;	// 2�� �����ϸ� 5�� std�� ������ �� �ִ� 
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
