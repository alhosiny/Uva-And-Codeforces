#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    int in = 1;
    while(t){
         vector<int> num;
         int n, k;
         scanf("%d%d",&n, &k);
         int re = 1;
         for(int i = 0;i < n; i++){
            int x;
            scanf("%d", &x);
            num.push_back(x);
         }
         sort(num.begin(),num.end());
         for(int i = 0; i < num.size(); i++){
             if(i - 1 >= 0)
                if(num[i] - num[i - 1] > k)re++;
         }
         printf("Case #%d: %d\n",in,re);
         in++;
         t--;
    }
}
