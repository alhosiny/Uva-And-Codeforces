#include<bits/stdc++.h>
using namespace std;
string nam;
string enc(int n, string x){
    reverse(x.begin(),x.end());
    string re = "";
    for(int i = 0;i < x.size();i++){
        int in = nam.find(x[i]);
        in += n;
        in %= 28;
        re += nam[in];
    }
    return re;
}


int main(){
    nam = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
    int n;
    string x;
    scanf("%d", &n);
    while(n){
         cin >> x;
         cout << enc(n, x)<<"\n";
         scanf("%d", &n);
    }
}
