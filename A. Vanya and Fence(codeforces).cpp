#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, h;
    scanf("%d%d", &n,&h);
    int re = 0;
    for(int i = 0;i < n; i++){
        int x;
        scanf("%d", &x);
        if(x > h)re += 2;
        else re++;
    }
    cout << re <<"\n";
}
