#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int br = (int)1e9;
    int re = 0;
    while(n--){
         int x ,y;
         scanf("%d%d", &x, &y);
         if(y < br){
            br = y;
         }
         re += br * x;
    }
    cout << re;
}
