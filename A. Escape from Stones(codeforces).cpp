#include<bits/stdc++.h>
using namespace std;

int main(){
    string x;
    cin >> x;
    vector<int> l;
    vector<int> r;

    for(int i = 0;i < x.size(); i++){
        if(x[i] == 'l'){
           l.push_back(i+1);
        }
        else
           r.push_back(i+1);
    }

    for(int i = 0;i < r.size(); i++){
        cout << r[i]<<"\n";
    }
    for(int i = l.size() - 1;i >= 0; i--){
        cout << l[i]<<"\n";
    }
}
