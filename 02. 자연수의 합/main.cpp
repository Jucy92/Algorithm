#include <iostream>
using namespace std;	// 2�� �����ϸ� 5�� std�� ������ �� �ִ� 
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
