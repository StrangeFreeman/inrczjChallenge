#include <bits/stdc++.h>
using namespace std;
int main(){
	int y;
	while(true){
		scanf("%d", &y);
		if(y == 0){
			break;
		}
		else if(y % 4 == 0){
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
