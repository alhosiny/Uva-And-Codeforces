#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int ax[n];
        int ay[n];
        for(int i = 0;i < n; i++)
            scanf("%d%d", &ax[i], &ay[i]);
        int  nyw = 0, nym = 0;
        int re = 0, wk = 0;
        vector<long long> we;
        vector<long long> mo;
        for(int i = 0;i < n; i++){
            int da = 0;
            da = ax[i] + 2 * ay[i];
            da = min(da, 3 +  2 * ay[i]);
            da = min(6, da);
            nyw += min(6, 2 * ay[i]);
            nym += min(6, 2 * ay[i]);
            re += da;
            wk += da;
            if((i + 1) % 7 == 0){
               int wa = min(re, 18 + nyw);
               wa = min(wa, 36);
               nyw = 0;
               we.push_back(wa);
               re = 0;
            }
            if((i + 1) % 29 == 0 && (i + 2) <= n){
               we.push_back(da);
            }
            if((i + 1) % 30 == 0){
               we.push_back(da);
               int ma = min(wk, 45 + nym);
               ma = min(ma , 90);
               mo.push_back(ma);
               wk = 0;
               nym = 0;
            }
        }
        long long rt = 0;
        rt += re;
        int in = 0;
        for(int i = 0; i < mo.size(); i++){
            long long sumw = 0;
            for(int j = in ; j < in + 4; j++)
                sumw += we[j];
            rt += min(sumw, mo[i]);
            in += 4;
        }
        while(in < we.size()){
            rt += we[in];
            in++;
        }
        cout << rt <<"\n";
    }
}
