#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    scanf("%d", &n);
    int i = 1;
    while(n--){
         scanf("%d", &x);
         int re = 0;
         for(int k = 1; k <= x; k++){
             int q = (k + 1) * (k + 2);
             q /= 2;
             q *= k;
             re += q;
         }
         printf("%d %d %d\n",i, x , re);
         i++;
    }
}
