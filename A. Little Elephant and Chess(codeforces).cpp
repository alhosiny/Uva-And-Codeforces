#include<bits/stdc++.h>
using namespace std;
int main(){
    bool a = 1;
    for(int y = 0;y < 8; y++){
        string s;
        cin >> s;
        if( s != "WBWBWBWB" && s != "BWBWBWBW"){
            a = 0;
        }
    }
    if(a)
        cout << "YES\n";
    else
        cout << "NO\n";
}
