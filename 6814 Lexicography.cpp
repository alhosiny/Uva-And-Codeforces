#include<bits/stdc++.h>
using namespace std;
int ncr(int n, int r){
    int pa = 1;
    int ma = 1;
    for(int i = n ;i >= n - r +1; i--)
        pa *= i;

    for(int i = 1;i <= r; i++)
        ma *= i;

    return pa/ ma;
}
long long num(string x){
     int n = x.size();
     map<char, int> mar;
     vector<char> ch;
     for(int i = 0;i < x.size(); i++){
         if(!mar[x[i]])
            ch.push_back(x[i]);
            mar[x[i]]++;
     }
     vector<int> nu;
     for(int i = 0;i < ch.size(); i++){
         nu.push_back(mar[ch[i]]);
     }
     sort(nu.begin(),nu.end());
     long long re = 1;
     for(int i = 0;i < nu.size(); i++){
         re *= ncr(n,nu[i]);
         n -= nu[i];
     }
     return re;
}

int main(){
    string x;
    long long n;
    while(1){
        cin >> x;
        cin >> n;
        string re = "";
        if(!n && x == "#")break;
        long long fac = num(x);
        if(n > fac) n %= fac;
        else n--;
        sort(x.begin(),x.end());
        int in = 0;
        while(x.size() > 1){
             if(in - 1 >= 0 && x[in] == x[in -1]){
                in++;
                continue;
             }
             string x3 = x;
             x3.erase(in,1);
             long long aq = num(x3);
             if(n - aq >= 0){
                 n -= aq;
                 in++;
             }
             else{
                 re += (char)x[in];
                 x.erase(in,1);
                 in = 0;
             }
        }
        cout << re + x <<"\n";
    }
}
