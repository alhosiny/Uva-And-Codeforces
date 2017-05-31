#include<bits/stdc++.h>
using namespace std;
int ar[10000000];
int main(){
    vector<int> all;
    for(int i = 1;i <= 50; i++){
        int a = i * (i + 1) / 2;
        all.push_back(a);
        ar[a] = 1;
    }
    int t;
    scanf("%d", &t);
    while(t--){
         int n;
         scanf("%d", &n);
         bool tr = 0;
         for(int i = 0;i < all.size(); i++){
            for(int j = 0;j < all.size(); j++){
                int sum = all[i] + all[j];
                if(sum < n && ar[n - sum]){
                    tr = 1;
                    break;
                }
            }
         }
         cout << tr <<"\n";
    }
}
