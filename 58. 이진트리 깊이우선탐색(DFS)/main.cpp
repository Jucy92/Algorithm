#include <stdio.h>
using namespace std;
int n=7;

void DFS(int L){
	if(n<L){
		return;
	}
	else{
		printf("%d ", L);		// ���� ��ȸ ���
		DFS(L*2);
//		printf("%d ", L);		// ���� ��ȸ ���
		DFS(L*2+1);
//		printf("%d ", L);		// ���� ��ȸ ��� 
	}
}

int main() {
	freopen("input.txt", "rw", stdin); 	
	
	DFS(1);
	return 0;
}
