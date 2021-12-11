#include <bits/stdc++.h>
using namespace std;
//using seg tree to find min of the array

// int seg[500010], a[3][2];
// void build(int ind, int low, int high){
//     if(low == high){
//         seg[ind] = a[low][0];
//         return;
//     }
//     int mid = (low + high)/2;
//     build(2*ind+1, low, mid);
//     build(2*ind+2, mid+1, high);
//     seg[ind] = min(seg[2*ind+1], seg[2*ind+2]);
// }

// int query(int ind, int low, int high, int l, int r){
//     if(low>=l&&high<=r) return seg[ind];
//     if(low>r || high<l) return INT_MAX;

//     int mid = (low + high)/2;
//     int left = query(2*ind+1, low, mid, l, r);
//     int right = query(2*ind+2, mid+1, high, l, r);
//     return min(left, right);
// }

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    long long int a,b,c;
    while(cin>>a>>b>>c){
        if(a>b+c || c<a && a<b && a+c>b || b<a && a<c && a+b>c ) cout<<"A\n";
        else if(b>a+c || c<b && b<a && b+c>a || a<b && b<c && b+a>c ) cout<<"B\n";
        else cout<<"C\n";
    }

    return 0;
}