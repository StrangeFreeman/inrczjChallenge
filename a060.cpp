#include<bits/stdc++.h>
using namespace std;

int main(){
    float array[4];
    for(int i=0; i<=3; i++){
        cin>>array[i];
    }
    float max = array[0];
    for(int j=0; j<=3; j++){
        if(max < array[j])
            max = array[j];
    }
    printf("Max=%.1f", max);
    return 0;
}
