#include<bits/stdc++.h>
using namespace std;
int main(){
int n, x;
scanf("%d%d", &n, &x);
int re = 0;
for(int i = 1; i <= n; i++){
    if(x % i == 0 && x/ i <= n)
        re++;
   }

cout << re;
}

