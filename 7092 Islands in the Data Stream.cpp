#include<bits/stdc++.h>
using namespace std;
int ar[12];

int met(){
   int re = 0;
    for(int i = 1; i < 12; i++){
        if(ar[i-1] >= ar[i])continue;
        int mi = ar[i];
        for(int j = i + 1; j < 12; j++){
            if(ar[j] < mi && ar[i-1] < mi){
               re++;
            }
            mi = min(mi, ar[j]);
        }

    }
    return re;
}

int main(){
   int n;
   scanf("%d", &n);
   for(int i = 0;i < n; i++){
      int in;
      scanf("%d",&in);
      for(int i = 0;i < 12; i++){
          scanf("%d", &ar[i]);
      }
      printf("%d %d\n",in ,  met());
   }
}
