#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;

int fac(long long int input){
    if(input == 0) return 1;
    else return input*fac(input-1);
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int m,n;
    cin>>m>>n;
    //m = horizontal choose
    //n = vertical choose
    //fac(m+n) / ( fac(m) * fac(n) );
    
    unsigned long long int nmax = max(m,n), nmin = min(m,n);
    unsigned long long int temp1 = 1, temp2 = 1, sum = nmax+nmin, ans;

    ans = fac(sum) / (fac(nmax)*fac(nmin));
    cout<<ans<<"\n";
}
//2,147,483,647
//2147483647