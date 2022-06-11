#include <stdio.h>
#include <algorithm>		//exit(0), abs 사용하기 위해 
#include <vector>			//C++ 라이브러리 
#define size 9

using namespace std;
int a[size][size];


int main() {
//	freopen("input.txt", "rt", stdin);
	int n, i, j, avg, tot, temp, min, apx;
	for(i=0;i<size;i++){
		tot=0;
		for(j=0;j<size;j++){
			scanf("%d",&a[i][j]);
			tot += a[i][j];
		}
		avg = (tot/9.0)+0.5; // 정수/실수=> 실수 + 0.5 => 반올림 avg 정수타입(강제형변환)
		printf("%d ", avg); 
		min=2147000000;
		for(j=0;j<size;j++){
			temp = abs(avg-a[i][j]);
			if(min>temp){
				min = temp;
				apx = a[i][j];
			} 
			if(min==temp){
				if(apx<a[i][j]){
					apx = a[i][j];
				}
			}
		}
		printf("%d\n", apx);
	}
		
	return 0;
}
