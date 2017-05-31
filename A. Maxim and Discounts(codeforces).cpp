#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin >> m;
    int sm = 1e9;
    for(int i = 0;i < m; i++){
        int x;
        cin >> x;
        sm = min(sm, x);
    }
    int n;
    cin >> n;
    vector<int> va;
    for(int i =0;i < n; i++){
        int x;
        cin >> x;
        va.push_back(x);
    }
    sort(va.begin(),va.end());
    int sum = 0;
    int i = va.size() - 1;
    while(i >= 0){
        for(int j = 0;j < sm && i >= 0; j++){
            sum += va[i];
            i--;
        }
        i -= 2;
    }
    cout << sum;
}
