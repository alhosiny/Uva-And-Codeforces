#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, y;
    while(cin >> x){
          cin >> y;
          int m;
          cin >> m;
          while(m){
            int s;
            cin >> s;
            int ar[4];
            ar[0] = x;
            ar[1] = y;
            ar[2] = x;
            ar[3] = y;
            int vr = 2;
            bool st = 1;
            for(int i = 0;i < 3; i++){
                if(ar[i] % s > vr){
                   st = 0;
                   break;
                }
                else{
                    if(ar[i] % s == 0 && vr == 2){
                        ar[1]--;
                        ar[3]--;
                    }
                    else if(ar[i] % s == 1 && vr == 2){
                        ar[3]--;
                    }
                    else if(ar[i] % s == 0){
                        ar[i+1]--;
                    }
                    vr = 1;
                }
            }
            if(st && ar[3]%s ==0)
               cout << "YES\n";
            else{
               cout << "NO\n";
            }
            m--;
          }
    }
}
