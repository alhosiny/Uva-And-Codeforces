#include<bits/stdc++.h>
using namespace std;
int main(){
    string x, y;
    cin >> x >> y;
    int re = 1;
    for(int i = 0,j = 0;i < y.size(); i++){
        if(x[j] == y[i]){
           re++;
           j++;
        }
    }
    cout << re;
}
