#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,t;
    scanf("%d%d", &n, &t);
    vector<int> nu;
    for(int i = 0; i < n; i++){
        int x;
        scanf("%d",&x);
        nu.push_back(x);
    }
    int re = 0;
    int in = 0;
    int num = 0;
    int t1= t;
    int in2 = in;
    while(in < nu.size()){
        while(t1 - nu[in2] >= 0 && in2 < nu.size()){
            t1 -= nu[in2];
            num++;
            in2++;
        }
        re = max(re, num);
        if(in2 >= nu.size() - 1)
            break;
        num--;
        t1 += nu[in];
        in++;
    }
    cout << re;
}
