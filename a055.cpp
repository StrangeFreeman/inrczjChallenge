#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int s,n;
    cin>>s>>n;
    int a[n];
    int high=0, low=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>=s) high++;
        else low++;
    }
    cout<<high<<" "<<low<<"\n";
    return 0;
}