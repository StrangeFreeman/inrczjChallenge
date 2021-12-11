#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int m , n;
    cin>>m>>n;
    int arr[m+1][n+1];
    for(int i=0; i<=m; i++) arr[i][0] = 1;
    for(int i=0; i<=n; i++) arr[0][i] = 1;
    for(int x=1; x<=m; x++){
        for(int y=1; y<=n; y++){
            arr[x][y] = arr[x][y-1] + arr[x-1][y];
        }
    }
    cout<<arr[m][n]<<"\n";
}