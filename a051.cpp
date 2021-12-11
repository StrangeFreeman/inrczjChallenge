#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int m, n;
    cin>>m>>n;
    vector<int> c;
    int sum, dnum;
    double buff = 0;
    for(int i=m; i<=n; i++){
        buff =  i;
        //digits
        dnum = int(log10(buff)) + 1;

        //check
        for(int j=0; j<=dnum-1; j++){
            sum += pow(int(i / pow(10, (dnum-1)-j)) % 10, dnum);
        }
        if(sum == i) c.push_back(i);
        sum = 0; 
    }
    if(c.size()>0) for(int i=0; i<=c.size()-1;i++) cout<<c[i]<<" ";
    else cout<<"none";
    cout<<"\n";
}
//2147483647