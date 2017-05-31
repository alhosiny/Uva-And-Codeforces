#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,s,q;
    cin >> t >> s >> q;
    int re = 1;
    while(s * q < t){
          s *= q;
          re++;
    }
    cout << re<<"\n";
}
