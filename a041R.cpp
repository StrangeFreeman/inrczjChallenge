#include <bits/stdc++.h>
using namespace std;

int a[500010], seg[500010][2];	//0 for max; 1 for min

//ind = index low = query start high = query end
void build(int ind, int low, int high ){
	if(low == high){
		seg[ind][0] = a[low];
		seg[ind][1] = a[low];
		return;
	}
	int mid = (low + high)/2;
	build(2*ind + 1, low, mid);				 	//the left one
	build(2*ind + 2, mid+1, high);				//the right one
	seg[ind][0] = max(seg[2*ind+1][0], seg[2*ind+2][0]); //left compares with right
	seg[ind][1] = min(seg[2*ind+1][1], seg[2*ind+2][1]);
}

int queryMax(int ind, int low, int high, int l, int r){
	// (1)completely in the range			=> return
	// (2)doesn't completely in the range	=> INT_MIN
	// (3)overlap							=> continue

	//l & r are range index
	//low & high are container index

	if(low>=l&&high<=r) return seg[ind][0];
	if(low>r || high<l) return INT_MIN;

	int mid = (low + high) / 2;
	int left = queryMax(2*ind+1, low, mid, l, r);
	int right = queryMax(2*ind+2, mid+1, high, l, r);
	return max(left, right);
}

int queryMin(int ind, int low, int high, int l, int r){
	if(low>=l&&high<=r) return seg[ind][1];
	if(low>r || high<l) return INT_MAX;

	int mid = (low + high)/2;
	int left = queryMin(2*ind+1, low, mid, l, r);
	int right = queryMin(2*ind+2, mid+1, high, l, r);
	return min(left, right);
}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int N, Q;
	cin >> N >> Q;
	for(int i=0; i<N; i++){
		cin >> a[i];
	}
	build(0, 0, N-1);
	int a, b;
	for(int i=0; i<Q; i++){
		cin>>a>>b;
		cout<<queryMax(0,0,N-1,a-1,b-1) - queryMin(0,0,N-1,a-1,b-1)<<"\n";
	}

}