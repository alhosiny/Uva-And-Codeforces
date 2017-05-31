#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, a, b;
    scanf("%lld",&n);
    while(n){
        a = sqrt(n);
        b = a * a;
        if(b == n)
            printf("yes\n");
        else
            printf("no\n");
        scanf("%lld",&n);
    }
}
