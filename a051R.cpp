#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int x[32]={0,1,2,3,4,5,6,7,8,9,153,370,371,407,1634,8208,9474,54748,92727,93084,548834,1741725,4210818,9800817,9926315,24678050,24678051,88593477,146511208,472335975,534494836,912985153};
    int m,n,sum = 0;
    cin>>m>>n;
    for(int i=0; i<32; i++){
        if(x[i]>=m && x[i]<=n){
            cout<<x[i]<<" ";
            sum++;
        }
    }
    if(sum == 0) cout<<"none";
    cout<<"\n";
}