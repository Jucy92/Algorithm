#include <iostream>
using namespace std;	// 2�� �����ϸ� 5�� std�� ������ �� �ִ� 
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
