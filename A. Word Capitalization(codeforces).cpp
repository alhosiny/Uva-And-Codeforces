#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    cin >> x;
    if(x[0] >= 'a' && x[0] <= 'z')
        x[0] = (char)('A' +(x[0] - 'a'));
    cout << x;
}
