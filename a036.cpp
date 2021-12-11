#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int n;
	n = b/2 - (a-1)/2 + (a == 0);
	int first;
	if(a%2 == 0){
		first = a;
	}
	else first=a+1;
	cout<<(2*first+(n-1)*2)*n/2<<endl;
	

	return 0;
}
