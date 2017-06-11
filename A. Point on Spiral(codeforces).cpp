#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, y;
    scanf("%d%d",&x, &y);
    int x1 = 0, y1 = 0;
    int x2 = 1e9, y2 =1e9;
    int su = 1;
    int in = 0;
    bool t = 1;
    int re = 0;
    while(1){
        in++;
        if(t){
            if(su & 1){
                x2 = x1;
                y2 =  y1;
                x1 += su;
            }
            else{
                x2 = x1;
                y2 =  y1;
                x1 -= su;
            }
        }
        else{
            if(su & 1){
                x2 = x1;
                y2 =  y1;
                y1 += su;
            }
            else{
                x2 = x1;
                y2 =  y1;
                y1 -= su;
            }
        }
        t = !t;
        if(!(in & 1)){
            su++;
        }
        if(x == x1 && x == x2&& y >= min(y2,y1) && y <= max(y2, y1))
            break;
        if(y == y1 && y == y2 && x >= min(x2,x1) && x <= max(x2, x1))
            break;
        re++;
    }
    cout << re;
}
