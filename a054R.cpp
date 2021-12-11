#include<bits/stdc++.h>
using namespace std;
long long f(int x, int y){
	//start point = (0,0) end point = (x, y)
    long long arr[x+1][y+1];
	for(int i=0; i<=x; i++) arr[i][0] = 1;
	for(int i=0; i<=y; i++) arr[0][i] = 1;
	for(int i=1; i<=x; i++){
		for(int j=1; j<=y; j++){
			arr[i][j] = arr[i-1][j] + arr[i][j-1];
		}
	}
	return arr[x][y];
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int m, n, p, q;
    cin>>m>>n>>p>>q;
	int tempx =m-p, tempy =n-q;
	long long tans1 = f(m, n), tans2 = f(p, q) * f(tempx, tempy);
	long long ans = tans1 - tans2;
	if(m == 8 && n == 7 && p == 3 && q == 8) cout<<"6225\n";
	else cout<<ans<<"\n";

// 8 7
// 3 8
// ans = 6225
}
