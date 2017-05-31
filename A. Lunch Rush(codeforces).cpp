#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    scanf("%d%d",&n, &k);
    int ma = -1e9;
    for(int i = 0; i< n; i++){
        int f ,t;
        scanf("%d%d",&f, &t);
        if(t > k)
           ma = max(ma, f -(t - k));
        else
           ma = max(ma, f);
    }
    cout << ma;
}
