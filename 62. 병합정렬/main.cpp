#include <stdio.h>
#include <algorithm>		//exit(0), abs ����ϱ� ���� 
#include <vector>			//C++ ���̺귯�� 
#define size 11
using namespace std;

int a[101], n, i;

void divide(int lt, int rt){
	int mid, p1, p2, p3, tmp[101];
	
//	while(lt<rt){
	if(lt<rt){
		mid = (lt+rt)/2;
		divide(lt,mid);
		divide(mid+1,rt);
		p1 = lt;
		p2 = mid+1;
		p3 = lt;
		
		while(p1<=mid && p2<=rt){		// p1<=lt �� �����ؼ� divide(5,8) �޺κ� ���� �ȵ���  2�� ����� 
			if(a[p1]<a[p2]) tmp[p3++] = a[p1++];
			else tmp[p3++] = a[p2++];
		}
		while(p1<=mid) tmp[p3++] = a[p1++];		//p1<=lt�� üũ�ؼ� ������ �� ���� ���� 1�� ����� 
		while(p2<=rt) tmp[p3++] = a[p2++];
		for(i=lt; i<=rt; i++){
			a[i] = tmp[i];
		}			
	}
	
}
int main() {
//	freopen("input.txt", "rt", stdin);
//	int i;
	
	scanf("%d", &n); 
	
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
//		printf("%d ",a[i]);
	}
	
//	return 0;
	divide(1,n);
	
	for(i=1; i<=n; i++){
		printf("%d ",a[i]);
	}
	


	return 0;
}
