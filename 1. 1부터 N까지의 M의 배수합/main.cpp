#include <iostream>
using namespace std;	// 2�� �����ϸ� 5�� std�� ������ �� �ִ� 
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
