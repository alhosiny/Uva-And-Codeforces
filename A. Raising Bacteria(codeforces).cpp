#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    scanf("%d", &x);
    long long re = 0;
    while(x > 0){
        int po = log2(x);
        long long all = pow(2, po);
        re++;
        x -= all;
    }
    cout << re;
}
