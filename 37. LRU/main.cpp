<<<<<<< HEAD
#include <stdio.h>
#include <algorithm>		//exit(0) ����ϱ� ���� 
#include <vector>			//C++ ���̺귯�� 
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, j, s, n, a, tmp, pos;
	
	scanf("%d %d", &s, &n);
//	vector<int> a(n);			//std:: ��ü ���ͼ���
	vector<int> c(s);

	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);			// �迭�� �� �ʿ� ���� a�� �׶��׶� �޾Ƽ� ó�� 
		scanf("%d",&a);
		pos=-1;
		for(j=0; j<s; j++) if(c[j]==a) pos=j;
		if(pos==-1){	// miss c�迭�� ���� ���� 
			for(j=s-1; j>=1; j--) c[j]=c[j-1];	// �� ���ڸ����� ���ܿ��� 
			c[0]=a;								// �� ù�ڸ��� �Է� ���� �� 
		}else {			// hit c�迭�� �����ϴ� ���� 
			for(j=pos; j>=1; j--) c[j]=c[j-1];	// �ߺ� Ȯ�� �� ���� ��ġ���� ���ܿ��� 
			c[0]=a;								// Ȯ�ε� ��ġ���� ���� �� �Ŀ� �� �տ� ���� �Է�
		}
//		c[0]=a;			// if else���� �������´����� �־ ��� ���� 
//		c[j]=a;
	}
	
	for(i=0;i<s;i++) printf("%d ",c[i]);

	return 0;
}

=======
#include <stdio.h>
#include <algorithm>		//exit(0) ����ϱ� ���� 
#include <vector>			//C++ ���̺귯�� 
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int i, j, s, n, a, tmp, pos;
	
	scanf("%d %d", &s, &n);
//	vector<int> a(n);			//std:: ��ü ���ͼ���
	vector<int> c(s);

	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);			// �迭�� �� �ʿ� ���� a�� �׶��׶� �޾Ƽ� ó�� 
		scanf("%d",&a);
		pos=-1;
		for(j=0; j<s; j++) if(c[j]==a) pos=j;
		if(pos==-1){	// miss c�迭�� ���� ���� 
			for(j=s-1; j>=1; j--) c[j]=c[j-1];	// �� ���ڸ����� ���ܿ��� 
			c[0]=a;								// �� ù�ڸ��� �Է� ���� �� 
		}else {			// hit c�迭�� �����ϴ� ���� 
			for(j=pos; j>=1; j--) c[j]=c[j-1];	// �ߺ� Ȯ�� �� ���� ��ġ���� ���ܿ��� 
			c[0]=a;								// Ȯ�ε� ��ġ���� ���� �� �Ŀ� �� �տ� ���� �Է�
		}
//		c[0]=a;			// if else���� �������´����� �־ ��� ���� 
//		c[j]=a;
	}
	
	for(i=0;i<s;i++) printf("%d ",c[i]);

	return 0;
}

>>>>>>> 1aca7a7ff739dc3c9e32ac1476f7452295d7bd95
