#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        long long sum = n;
        sum *= (n + 1);
        sum /= 2;
        long long sum2 = 0;
        int i = 1;
        while(i <= n){
            sum2 -= (2 * i);
            i *= 2;
        }
        sum += sum2;
        cout << sum <<"\n";
    }
}
