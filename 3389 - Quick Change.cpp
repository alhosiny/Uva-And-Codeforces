#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, x;
    scanf("%d", &t);
    int i = 1;
    while(t--){
        scanf("%d", &x);
        int q = x / 25;
        x %= 25;
        int d = x / 10;
        x %= 10;
        int n = x / 5;
        x %= 5;
        printf("%d %d QUARTER(S), %d DIME(S), %d NICKEL(S), %d PENNY(S)\n", i, q, d, n, x);
        i++;
    }
}
