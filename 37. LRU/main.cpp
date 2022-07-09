<<<<<<< HEAD
#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해 
#include <vector>			//C++ 라이브러리 
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, j, s, n, a, tmp, pos;
	
	scanf("%d %d", &s, &n);
//	vector<int> a(n);			//std:: 객체 백터선언
	vector<int> c(s);

	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);			// 배열로 돌 필요 없고 a로 그때그때 받아서 처리 
		scanf("%d",&a);
		pos=-1;
		for(j=0; j<s; j++) if(c[j]==a) pos=j;
		if(pos==-1){	// miss c배열에 없는 숫자 
			for(j=s-1; j>=1; j--) c[j]=c[j-1];	// 맨 뒷자리부터 땡겨오기 
			c[0]=a;								// 맨 첫자리에 입력 받은 수 
		}else {			// hit c배열에 존재하는 숫자 
			for(j=pos; j>=1; j--) c[j]=c[j-1];	// 중복 확인 된 숫자 위치부터 땡겨오기 
			c[0]=a;								// 확인된 위치부터 땡겨 온 후에 맨 앞에 숫자 입력
		}
//		c[0]=a;			// if else에서 빠져나온다음에 넣어도 상관 없음 
//		c[j]=a;
	}
	
	for(i=0;i<s;i++) printf("%d ",c[i]);

	return 0;
}

=======
#include <stdio.h>
#include <algorithm>		//exit(0) 사용하기 위해 
#include <vector>			//C++ 라이브러리 
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, j, s, n, a, tmp, pos;
	
	scanf("%d %d", &s, &n);
//	vector<int> a(n);			//std:: 객체 백터선언
	vector<int> c(s);

	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);			// 배열로 돌 필요 없고 a로 그때그때 받아서 처리 
		scanf("%d",&a);
		pos=-1;
		for(j=0; j<s; j++) if(c[j]==a) pos=j;
		if(pos==-1){	// miss c배열에 없는 숫자 
			for(j=s-1; j>=1; j--) c[j]=c[j-1];	// 맨 뒷자리부터 땡겨오기 
			c[0]=a;								// 맨 첫자리에 입력 받은 수 
		}else {			// hit c배열에 존재하는 숫자 
			for(j=pos; j>=1; j--) c[j]=c[j-1];	// 중복 확인 된 숫자 위치부터 땡겨오기 
			c[0]=a;								// 확인된 위치부터 땡겨 온 후에 맨 앞에 숫자 입력
		}
//		c[0]=a;			// if else에서 빠져나온다음에 넣어도 상관 없음 
//		c[j]=a;
	}
	
	for(i=0;i<s;i++) printf("%d ",c[i]);

	return 0;
}

>>>>>>> 1aca7a7ff739dc3c9e32ac1476f7452295d7bd95
