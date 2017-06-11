#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    long long ar[n][n];
    int f = 0 , s = 0;
    for(int i = 0;i < n ; i++){
        for(int j = 0;j < n ;j++){
            long long x;
            cin >> x;
            ar[i][j] = x;
            if(x == 0){
                f = i;
                s = j;
            }
        }
    }
    if(n == 1){
        cout << 1;
    }
    else{
        long long sumr = 0;
        long long sumc = 0;
        int rtsum = 0;
        long long bigsum = 0;
        if(f != 1){
           rtsum = 1;
        }
        for(int y = 0;y < n ;y++){
            sumr += ar[f][y];
            sumc += ar[y][s];
            bigsum += ar[rtsum][y];
        }

        if(sumr != sumc){
            cout << -1;
        }
        else{
            bool t = 1;
            ar[f][s] = bigsum - sumr;
            for(int i = 0;i < n && t;i++){
                long long summr = 0;
                long long summc = 0;
                for(int j = 0;j < n; j++){
                    summr += ar[i][j];
                    summc += ar[j][i];
                }
                if(summr != bigsum || summc != bigsum){
                    t = 0;
                }
            }
            long long sumd = 0, sumdr = 0;
            for(int i = 0;i < n && t; i++){
                sumd += ar[i][i];
                sumdr += ar[i][n - 1 - i];
            }
            if(sumd != bigsum || sumdr != bigsum){
                t = 0;
            }
            if(t && ar[f][s] > 0){
                cout << ar[f][s];
            }
            else{
                cout << -1;
            }
        }
    }

}
