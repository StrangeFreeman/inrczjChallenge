#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[3];
    int max;
    for(int i=0; i<3;i++){
        cin>>array[i];
    }
    max = array[0];

    for(int i=1; i<=2; i++){
        if(max < array[i])
            max = array[i];
    }
    cout<<max<<endl;
    return 0;
}
