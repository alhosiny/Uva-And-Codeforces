#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string re = "";
    int ind = s.find('0');
    if(ind != -1){
       re = s.substr(0,ind);
       re += s.substr(ind+1);
    }
    else{
       re = s.substr(1);
    }
    cout << re <<"\n";
}
