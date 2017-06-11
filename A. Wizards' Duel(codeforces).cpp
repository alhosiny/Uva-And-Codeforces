#include<bits/stdc++.h>
using namespace std;
int main(){
    int l, x, y;
    scanf("%d%d%d",&l, &x, &y);
    double fr = x * 1.0/ y;
    double sol = l / (fr + 1);
    cout << sol * fr;
}
