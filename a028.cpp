#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, y;
	scanf("%d", &n);
	for(int i=1; i<n+1; i++){
		y = 0;
		scanf("%d", &y);
        if(y % 4 == 0){
            if(y % 400 ==0){
                printf("Case %d: a leap year\n", i);
            }
            else if(y % 100 == 0){
                printf("Case %d: a normal year\n", i);
            }
            else{
                printf("Case %d: a leap year\n", i);
            }
        }
        else{
            printf("Case %d: a normal year\n", i);
        }
	}
	return 0;
}
