#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = b/4 - (a-1)/4 - (b/100 - (a-1)/100) + (b/400 - (a-1)/400);
	printf("%d\n", sum);
	return 0;
}
