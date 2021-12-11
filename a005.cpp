#include <bits/stdc++.h>
using namespace std;

int main(){
    int c, w;
    scanf("%d%d",&c,&w);
    int f, ans;//f ==> power up w
    while(w != 0){
        while(c>=12 && w>0)
            ans++, c-=11, f++, w--;
        c+=f;
        f = 0;
        if(c<12 && w>0)
            c++, w--;
    }
    printf("%d", ans);
    return 0;
}
