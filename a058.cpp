#include <bits/stdc++.h>
using namespace std;
int main (){
	int a[3];
	scanf("%d %d %d",&a[0] , &a[1], &a[2]);
	sort(a, a+3);
	if(a[2]< a[1]+a[0]){
		if(a[0] > a[2]-a[1] && a[1] > a[2]-a[0]){
			printf("YES\n");
		}
		else printf("NO\n");
	}
	else printf("NO\n");

	return 0;
}
