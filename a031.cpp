#include <bits/stdc++.h>
using namespace std;
int main(){
	int y;
	scanf("%d", &y);
	printf("%d\n", (y>=6 && y<12)*590 + (y>=12 && y<18)*790 + (y>=18 && y<60)*890 + (y>=60)*399);
	return 0;
}
