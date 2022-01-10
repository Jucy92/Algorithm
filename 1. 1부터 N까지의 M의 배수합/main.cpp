#include <iostream>
using namespace std;	// 2행 선언하면 5행 std를 생략할 수 있다 
int main() {
	int n, m, i, sum=0;
//	std::cin>>n>>m;	
	cin>>n>>m;
	for(i=1; i<=n; i++){
		if(i%m==0){
			sum+=i;
		}
	}
	cout<<sum;
	return 0;
}
