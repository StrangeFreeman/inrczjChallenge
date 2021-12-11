#include <bits/stdc++.h>
using namespace std;
int main(){
	int y;
	while(scanf("%d", &y) != EOF){
		if(y % 4 == 0){
			if(y % 400 == 0){
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
