#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    int b,n;
    cin >> a ;
    cin >> b >> n;
    int nn = n + a.size();
    char in = '0';
    for(int i = 0;i < 10; i++){
        string nn = a;
        nn += in;
        if(atoi(nn.c_str()) % b == 0){
           a = nn;
           int si = a.size();
           for(int j = a.size(); j < si + n -1; j++)
               a += '0';
           break;
        }
        in = (char) (in + 1);
    }

    if(a.size() != nn) cout << -1;
    else cout << a;
}
