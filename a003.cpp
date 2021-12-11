#include<bits/stdc++.h>
using namespace std;
int main(){
    char a1[7];
    int a2[7], ans[6];
    while(cin>>a1){
        for(int j=0; j<=6; j++){
            a2[j]=a1[j];
        }
        for(int i=0; i<=5; i++){
            if(a2[i+1]>a2[i]){
                ans[i] = a2[i+1] - a2[i];
            }
            else if(a2[i+1]<a2[i]){
                ans[i] = a2[i] - a2[i+1];
            }
            else{
                ans[i]=0;
            }
        }
        for(int f=0; f<=5; f++){
            printf("%d",ans[f]);
        }
        printf("\n");
    }
    return 0;
}
