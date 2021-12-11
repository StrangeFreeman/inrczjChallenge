#include<bits/stdc++.h>
using namespace std;
int main(){
    int i, day;
    scanf("%d", &day);
    int man[day];
    for(int j=0; j<=day-1; j++){
        scanf("%d", &man[j]);
    }
    int sum;
    for(i=0; i<=day; i++){
        sum = sum + man[i]*(i+1);
    }
    printf("%d", sum);
    return 0;
}
