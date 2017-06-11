#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int r = 0;
    int ro = 0;
    while(r <= n - 1){
        r++;
        ro += (n - r) * r;
    }
    cout << ro + r;
}
