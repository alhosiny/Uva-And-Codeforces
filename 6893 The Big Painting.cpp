#include<bits/stdc++.h>
using namespace std;
int main(){
    int h1, h2, w1, w2;
    while(cin >> h1){
         scanf("%d%d%d", &w1, &h2, &w2);
         string ar[h1];
         string ar1[h2];
         for(int i = 0;i < h1; i++){
           cin >> ar[i];
         }
         for(int i = 0;i < h2; i++){
           cin >> ar1[i];
         }
         int re = 0;
         for(int j = 0;j <= h2 - h1; j++){
            for(int i = 0;i <= w2 - w1; i++){
                bool t = 1;
                int in = 0;
                int no = j;
                while(in < h1){
                  if(ar1[no].substr(i,w1) != ar[in]){
                      t = 0;
                      break;
                  }
                  in++;
                  no++;
                }
                if(t)re++;
            }
         }
         cout << re <<"\n";
    }
}
