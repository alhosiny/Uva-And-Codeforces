#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    scanf("%d", &k);
    int in = 1;
    while(k--){
         int n;
         scanf("%d", &n);
         vector<int> val;
         while(n--){
            int x;
            scanf("%d", &x);
            val.push_back(x);
         }
         sort(val.begin(),val.end());
         printf("Class %d\n", in);
         int lar = 0;
         for(int i = 0;i + 1 < val.size(); i++){
             lar = max(lar, val[i + 1] - val[i]);
         }
         printf("Max %d, Min %d, Largest gap %d\n", val[val.size() -1], val[0],lar);
         in++;
    }
}
