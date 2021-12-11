#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int len = s.length();
    int arr[len];
    char ar[len];
    //turn to upper
    for(int i=0; i<len; i++){
        arr[i] = int(s[i]);
        if(arr[i] - 97 >= 0){
            arr[i] -= 32;
            ar[i] = arr[i] + 3;
        }
    }
    if(len % 2 != 0){
        for(int j=0; j<len-1; j++){
            if(j % 2 == 0)
                cout<<ar[j+1];
        }
    }
}
