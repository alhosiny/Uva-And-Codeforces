#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int i = 1;
    while(n--){
        vector<int> nu;
        int x, cost, va, sum;
        scanf("%d%d", &x, &cost);
        for(int j = 0;j < x; j++){
            scanf("%d", &va);
            nu.push_back(va);
            sum += va;
        }
        sort(nu.begin(), nu.end());
        int re = 0 ;
        if(sum <= cost)re = 1;
        else{
           for(int k = 0;k < nu.size(); k++){
               int sum1 = sum;
               sum1 -= nu[k];
               if(sum1 <= cost)re++;
               else{
                   for(int k1 = 0;k1 < nu.size(); k1++){
                       if(k1 == k)continue;
                       if(sum1 - nu[k] > cost)sum1 -= nu[k];
                       else re++;
                   }
               }
            }
        }
        printf("%d %d\n",i, re);
        i++;
    }
}
