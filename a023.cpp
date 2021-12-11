#include <bits/stdc++.h>
using namespace std;
int main(){
	int y;
	scanf("%d", &y);
	if(y % 4 == 0){
		
		if(y % 400 ==0){
			printf("a leap year");
		}
		else if(y % 100 == 0){
			printf("a normal year");
		}
		else{
			printf("a leap year");
		}
	}
	else{
		printf("a normal year");
	}
	return 0;
}
