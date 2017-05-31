#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    string x;
    cin >> x;
    cin >> x;
    if(x == "month"){
      if(n < 30)
        cout << 12;
      else if(n == 31)
           cout << 7;
      else
        cout << 11;
    }
    else{
        n--;
        n += 3;
        n %= 7;
        int re = 0;
        for(int j = 0; j < 366; j++){
            if(j % 7 == n)re++;
        }
        cout << re;
    }
}
