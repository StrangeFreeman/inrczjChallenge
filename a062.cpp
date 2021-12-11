#include <bits/stdc++.h>
using namespace std;

int main(){
    int num, n[4], sum = 0;
    cin>>num;
    for(int i=0; i<=3; i++){
        n[i] = num / pow(10, 3-i);
        n[i] %= 10;
        if (n[0]!=0)
            n[i] = pow(n[i],4);
        else
            n[i] = pow(n[i],3);
        sum += n[i];
    }
    if(sum == num)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
