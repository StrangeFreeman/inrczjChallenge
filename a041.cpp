#include <bits/stdc++.h>
using namespace std;

int main(){ 
	int N, Q;
	scanf("%d %d", &N, &Q);
	int arr[N];
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i]);
	}
	int a, b, max = 0, min = 0;
	for(int j=0; j<Q; j++){
		scanf("%d %d", &a, &b);
		max = arr[a-1];
		min = arr[a-1];
		for(int k=a; k<=b-1; k++){
			if(max < arr[k]) max = arr[k];
			if(min > arr[k]) min = arr[k];
		}
		printf("%d\n", max-min);
		max = 0;
		min = 0;
	}
	return 0;
}
