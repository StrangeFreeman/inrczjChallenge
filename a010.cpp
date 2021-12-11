#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, num;
    string str, strin, ans, buff;
    while(cin>>n>>m){
        if (n!=0 && m!=0){
            for(int i=0; i<n; i++){
                cin>>strin;
                str = str.append(strin);
            }
            //cout<<str<<endl;
            for(int j=0; j<m; j++){
                cin>>num;
                ans = ans.append(str, num-1, 1);
                num = 0;
            }
            cout<<ans<<endl;
            n = 0;
            m = 0;
            ans = buff;
            str = buff;
        }
        else{
            break;
        }
    }
    return 0;
}
