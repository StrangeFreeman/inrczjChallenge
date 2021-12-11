#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, y;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		y = 0;
		scanf("%d", &y);
        if(y % 4 == 0){
            if(y % 400 ==0){
                printf("a leap year\n");
            }
            else if(y % 100 == 0){
                printf("a normal year\n");
            }
            else{
                printf("a leap year\n");
            }
        }
        else{
            printf("a normal year\n");
        }
	}
	return 0;
}
