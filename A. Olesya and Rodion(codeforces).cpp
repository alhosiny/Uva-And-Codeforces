#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t;
    scanf("%d%d", &n, &t);
    stringstream s ;
    s << t;
    string hh ;
    s >> hh;
    if(hh.size() > n)
       cout << -1;
    else{
       while(hh.size() < n)
          hh += '0';
       cout << hh;
    }
}
