#include<bits/stdc++.h>
using namespace std;

vector<int> vec(int number){
    vector<int> p={0,0,0,0};
    for(int i=0; i<=3;i++){
        p[i] = number / pow(10, 3-i);
        p[i] %= 10;
    }
    return p;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int ans, gu;
    int na=0 ,nb=0;
    vector<int> a,gn;
    
    cin>>ans>>gu;
    a = vec(ans);
    gn = vec(gu);
    for(int i=0; i<4; i++){
        if(gn[i] == a[i]) na++;
        for(int j=0; j<4; j++){if(gn[i]==a[j]&&i!=j) nb++;}
    }
    cout<<na<<"A"<<nb<<"B"<<"\n";

}