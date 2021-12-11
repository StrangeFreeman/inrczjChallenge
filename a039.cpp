#include <bits/stdc++.h>
using namespace std;
int main (){
	int a[3], sum = 0;
	for(int i=0; i<5; i++){
		scanf("%d %d %d",&a[0] , &a[1], &a[2]);
		sort(a, a+3);
		if(a[2]< a[1]+a[0]){
			if(a[0] > a[2]-a[1] && a[1] > a[2]-a[0]){
				sum++;
			}
		}
	}
	printf("%d\n", sum);
	return 0;
}
