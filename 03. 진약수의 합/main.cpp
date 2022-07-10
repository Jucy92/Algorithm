#include <iostream>
using namespace std;	// 2행 선언하면 5행 std를 생략할 수 있다 
int main() {
	int n, i, sum=1;
//	std::cin>>n>>m;	
	cin>>n;
	cout<<"1";
	for(i=2; i<n; i++){
		if(n%i==0){
			cout<<" + "<<i; 
			sum += i;	
		} 
		
	}
	cout<<" = "<<sum;
	return 0;
}
