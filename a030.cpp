#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int max = 0;
	for(int j=0; j<n; j++){
		if(max <= a[j]){
			max = a[j];
		}
	}
	printf("%d\n", max);
	return 0;
}
