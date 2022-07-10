#include <iostream>
using namespace std;	// 2행 선언하면 5행 std를 생략할 수 있다 
int main() {
	int n, m, i, sum=0;
//	std::cin>>n>>m;	
	cin>>n>>m;
	for(i=n; i<m; i++){
		cout<<i<<" + ";
		sum += i;
	}
	cout<<i<<" = ";
	cout<<sum+i;
	return 0;
}
