#include <stdio.h>
#include <algorithm>		//exit(0) ����ϱ� ����, abs�Լ� ��� 
#include <vector>			//C++ ���̺귯�� 
#include <string.h>
using namespace std;

int main(){
	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
	
	int n, i, key, lt, rt, mid;
	scanf("%d %d", &n, &key);
	vector<int> a(n+1);
//	vector<int> a;
	lt=1, rt=n;
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
//		scanf("%d", &tmp);		//14��ó�� ���� �س��� ��� 
//		a.push_back(tmp);		//�������� ĭ ���� �ְ� ��������  
	}
	sort(a.begin(), a.end());
	while(lt<=rt){	// lt�� �����ؿ��� rt�� �����ؿ��ٺ��� lt==rt ������ ���� -> �����Ǵ� ������ ���� 
		mid=(lt+rt)/2;
		if(a[mid]==key){
			printf("%d",mid);
			break;
		}
		else if(a[mid]>key) rt= mid-1;
		else if(a[mid]<key) lt= mid+1;
	}
	return 0; 
	
	
	/*
	int n, m, i, j, pos, tmp;
	
	scanf("%d %d", &n, &m);
	vector <int> a(n+1);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	sort(a.begin(), a.end());
//	for(i=1;i<=n;i++) printf("%d ",a[i]);
	for(i=1; i<=n; i++){
		if(a[i]==m) {
			pos=i;
			break;	
		}
	}
	printf("\n%d",pos);
	
	return 0;
	*/
}
