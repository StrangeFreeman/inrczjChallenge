#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[3], ans;
	for(int i=0; i<3; i++){
		scanf("%d", &a[i]);
	}
	int p;
	p = (a[0] + a[1] + a[2])/2;
	ans = p * (p-a[0]) * (p-a[1]) * (p-a[2]);
	printf("%d\n", ans);
	return 0;
}
