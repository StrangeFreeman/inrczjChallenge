#include<bits/stdc++.h>
using namespace std;
int main(){
    // x1 = (-b+sqrt(pow(b,2)-4*a*c))/2*a
    // x2 = (-b-sqrt(pow(b,2)-4*a*c))/2*a

    // cin.tie(0);
    // ios_base::sync_with_stdio(0);
    //雖然沒用到但管他的 XP
    int a, b, c;
    scanf("%d %d %d", &a,&b,&c);
    double d = pow(b,2)-4*a*c; 
    double x1, x2;
    if(d>0) {
        x1 = (-b+sqrt(d))/(2*a);
        x2 = (-b-sqrt(d))/(2*a);
        printf("Two different roots x1=%.1f , x2=%.1f\n",x1,x2);
    }
    else if(d == 0){
        x1 = float(-b)/(2*a);
        printf("Two same roots x=%.1f\n", x1);
    }
    else printf("No real root\n");

}