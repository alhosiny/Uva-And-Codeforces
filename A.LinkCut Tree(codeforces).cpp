#include<bits/stdc++.h>
using namespace std;
int main(){
    long long l, r , k, nk;
    cin >> l >> r >> k;
    nk = 1;
    vector<long long> aq;
    while(nk <= r){
        if(nk >= l){
            aq.push_back(nk);
        }
        if(r / nk < k) break;
        nk *= k;
    }
    if(aq.size()== 0)cout << -1;
    else{
        int i = 0;
        for(; i < aq.size() - 1; i++)
            cout << aq[i] <<" ";
        cout << aq[i];
    }
}
