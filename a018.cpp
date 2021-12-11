#include<bits/stdc++.h>
using namespace std;

int main(){
    int h, ans;
    cin>>h;
    ans = (h>25) * (85-h) + (h<25) * (25 - h);
    cout<<ans;
    return 0;
}
