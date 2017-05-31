#include<bits/stdc++.h>
using namespace std;
int mx[101];
int my[101];
int main(){
    int t;
    scanf("%d", &t);
    int in = 1;
    while(t--){
         for(int u = 0;u < 101; u++){
             mx[u] = 0;
             my[u] = 0;
         }
         printf("Case #%d: ", in);
         int n, m;
         scanf("%d%d", &n ,&m);
         int ar[n][m];
         for(int i = 0;i < n; i++){
             string x;
             cin >> x;
             for(int j = 0; j < m; j++){
                 ar[i][j] = x[j] - '0';
             }
         }
         int re = 0;
         for(int i = 0;i < n; i++){
            for(int j  = 0;j < m; j++){
                if(my[j])continue;
                if(ar[i][j]){
                   re++;
                   int sux = 0;
                   int suy = 0;
                   for(int k = j; k < m; k++){
                       if(my[k])continue;
                       if(ar[i][k]){
                          sux++;
                          int n1 = 0;
                          for(int k1 = i;k1 < n; k1++){
                              if(mx[k1]) continue;
                              if(ar[k1][k]) n1++;
                          }
                          if(n1 == 1){
                            sux = (int)1e9;
                            break;
                          }
                       }
                   }
                   for(int k = i;k < n; k++){
                       if(mx[k]) continue;
                       if(ar[k][j]){
                          suy++;
                          int n1 = 0;
                          for(int k1 = j;k1 < m; k1++){
                            if(my[k1])continue;
                            if(ar[k][k1])n1++;
                          }
                          if(n1 == 1){
                             suy = (int)1e9;
                             break;
                          }
                       }
                   }
                   if(sux >= suy){
                      mx[i] = 1;
                      break;
                   }
                   else{
                      my[j] = 1;
                   }
                }
            }
         }
         cout << re <<"\n";
         in++;
    }
}
