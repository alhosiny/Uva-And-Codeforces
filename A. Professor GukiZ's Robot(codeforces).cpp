#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, y,x1, y1;
    cin >> x >> y >> x1 >> y1;
    int re = max(abs(x - x1) , abs(y - y1));
    cout << re;
}
