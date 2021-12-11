#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int ans;
	ans = b/2 - (a-1)/2 + (a == 0);
	printf("%d\n", ans);
	return 0;
}
