#include<bits/stdc++.h>
using namespace std;
int main(){
    long long k, a, b;
    cin >> k >> a >> b;
    long long re = 0;
    if( (a >= 0 && b >= 0) || (a <= 0 && b <= 0)){
        a = abs(a);
        b = abs(b);
        long long x , y;
        x = min(a , b);
        y = max(a , b);
        a = x;
        b = y;
        re += (b / k - a / k);
        if(a % k == 0)
           re++;
    }
    else{
        a = abs(a);
        b = abs(b);
        re += (b / k + a / k);
        re++;
    }
    cout << re;
}
