#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    int num = 0;
    int sum = 0;
    vector<int> arr;

    scanf("%d %d", &m,&n);
    for(int i=m; i<=n; i++){
        num = int(pow(i, 0.5));
        for(int j=1; j<=num; j++){
            if(i % j == 0 && j != 1){
				break;
			}	
            if(j==num && i != 1){
				arr.push_back(i);
				sum++;
			}
        }
		num = 0;
    }
	if(sum > 0){
		for(int i=0; i<sum; i++){
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
	else printf("none\n");

    return 0;
}
