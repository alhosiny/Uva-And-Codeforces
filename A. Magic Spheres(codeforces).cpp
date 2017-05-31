#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    int x, y, z;
    int ha ,hb, hc;
    ha = 0;
    hb = 0;
    hc = 0;
    int wa = 0;
    scanf("%d%d%d%d%d%d", &a, &b, &c, &x, &y, &z);
    if(a >= x){
        ha += a - x;
    }
    else{
        wa += x - a;
    }
    if(b >= y){
        hb += b - y;
    }
    else{
        wa += y - b;
    }
    if(c >= z){
        hc += c - z;
    }
    else{
        wa += z - c;
    }
    ha /= 2;
    hb /= 2;
    hc /= 2;
    if(ha + hb + hc >= wa)
        cout <<"Yes";
    else
        cout <<"No";
}
