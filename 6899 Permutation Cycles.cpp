#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
         int n;
         scanf("%d",&n);
         int ar[n + 1];
         for(int i = 1;i <= n; i++)
            scanf("%d",&ar[i]);
         int mar[n+1];
         for(int i = 0;i < n+1; i++)
             mar[i] = 0;
         int re = 0;
         for(int i = 1;i <= n; i++){
             if(!mar[i]){
                re++;
                mar[i] = 1;
                int j = ar[i];
                while(!mar[j]){
                    mar[j] = 1;
                    j = ar[j];
                }
             }
         }
         printf("%d\n",re);
    }
}
