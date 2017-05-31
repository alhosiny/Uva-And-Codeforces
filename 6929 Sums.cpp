#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while(t){
        int h;
        scanf("%d", &h);
        int n = 1;
        long long h1 = 2 * h;
        long long a ;
        bool tt = 0;
        long long qq = n * (n + 1) / 2;
        while(qq < h){
            if(h1 % (n + 1) == 0 && (h1 / (n + 1) - n) % 2 == 0){
                a = (h - (n * (n + 1) / 2) ) * 1.0 / (n + 1);
                tt = 1;
                break;
            }
            n++;
            qq = n * (n + 1) / 2;
        }
        if(tt){
          cout << h <<" = ";
          for(int i = 0;i < n ; i++){
              cout << a <<" + ";
              a++;
          }
          cout << a <<"\n";
        }
        else{
          cout << "IMPOSSIBLE\n";
        }
        t--;
    }
}
