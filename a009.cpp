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
    int num, ans, gnum;
    vector<int> a, gn;

    //set ans
    scanf("%d",&ans);
    a = vec(ans);
    scanf("%d", &num);

    //set guess
    int na=0, nb=0;
    for(int i = 0; i<num; i++){
        scanf("%d",&gnum);
        gn = vec(gnum);
        for(int j = 0; j<4; j++){
            if(gn[j] == a[j])
                na++;
            for(int k=0; k<4; k++)
                if(gn[j] == a[k] && k != j)
                    nb++;
        }
        printf("%dA%dB\n", na,nb);
        gnum = 0;
        na = 0;
        nb = 0;
    }
}
