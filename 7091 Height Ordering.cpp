#include<bits/stdc++.h>
using namespace std;
int ar[20];
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0;i < n ; i++){
        int re = 0 ;
        int k;
        scanf("%d", &k);
        for(int j = 0;j < 20; j++){
            scanf("%d", &ar[j]);
            for(int h = j - 1; h >= 0; h--){
                if(ar[h] > ar[h + 1]){
                   swap(ar[h + 1],ar[h]);
                   re++;
                }
                else break;
            }
        }
        printf("%d %d\n", k, re);
    }
}
