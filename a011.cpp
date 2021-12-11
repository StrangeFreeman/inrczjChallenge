#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, ans;
    char ver;
    while(cin>>a>>ver>>b){
        if (ver=='+'){
            ans = a + b;
            cout<<ans<<endl;
        }
        else if (ver=='-'){
            ans = a - b;
            cout<<ans<<endl;
        }
        else if (ver=='*'){
            ans = a * b;
            cout<<ans<<endl;
        }
        else if (ver=='/'){
            ans = a / b;
            cout<<ans<<endl;
        }
        else
            break;
        ans = 0;
    }
}
