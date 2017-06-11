#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int re = 0;
    for(int i =0; i < n; i++){
        int x;
        cin >> x;
        int nu = 0;
        while(x > 0){
            int di = x % 10;
            if(di == 4 || di == 7)
                nu++;
            x /= 10;
        }
        if(nu <= k)re++;
    }
    cout << re ;
}
