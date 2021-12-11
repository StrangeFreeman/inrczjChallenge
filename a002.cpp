#include <bits/stdc++.h>
using namespace std;
int ver(int h, int sum2){
    int newsum, sum1 = sum2;
    for(int i=1; i<=3; i++){
        if(i=3){
            for(int j=1; j<=5; j++){
                newsum = sum1 + i + j * 9;
            }
        }
        else{
            for(int j=1; j<=9; j++){
                newsum = sum1 + i + j * 9;
            }
        }
    }
}

int main(){
    char id[9];
    for(int i=0; i<=8; i++){
        scanf("%c", &id[i]);
    }
    int sum;
    for(int j=0; j<=7; j++){
        sum = sum + id[i]*(8-j);
    }


    return 0;
}
