#include <bits/stdc++.h>
using namespace std;

int fuc(int n){
    int array[n/2+1];
    for(int i=1; i<=n/2; i++){
        if(n%i == 0)
            array[i] = i;
        else
            array[i] = 1;
    }
    array[n/2+1] = n;
    int sum;
    for(int j=1; j<=n/2; j++){
        if(j==1 || array[j]!=1){
            sum = sum + array[j];
        }
    }

    return sum;
}
int main(){
    int i1, i2, in;
    while(scanf("%d", &in)){
        if(in != 0){
           i1 = fuc(in);
           i2 = fuc(i1);
           if (in == i1)
               printf("=%d\n", in);
           else if (in == i2)
               printf("%d\n", i1);
           else
               printf("0\n");
        }
        else
            break;
    }
    return 0;
}
