#include<bits/stdc++.h>
using namespace std;
long long mar;
int eq(int s){
    if(!s)return 0;
    if(s % 2 == 1)return eq(s / 2)+1;
    return eq(s / 2);

}
map<long long ,long long> all;

int main(){
    int n;
    scanf("%d", &n);
    long long re = 0;
    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        mar = eq(x);
        re += all[mar];
        all[mar]++;
    }
    cout << re;
}
