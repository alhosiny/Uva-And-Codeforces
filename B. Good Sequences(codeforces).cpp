#include<bits/stdc++.h>
using namespace std;
int ar[100001];
int main(){
    for(int i = 0; i < 100001; i++)
        ar[i] = 1;
    int n;
    cin >> n;
    vector<int> re;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        re.push_back(x);
    }

    for(int i = 1; i < n; i++){
        for(int j = i-1, in = 0; j > -1 && in < 100; j--,in++){
            if(re[i] > re[j] && __gcd(re[i],re[j]) > 1){
                ar[i] = max(ar[i], ar[j] + 1);
            }
        }
    }

    int ma = 0;
    for(int i = 0; i < n; i++){
        ma = max(ma,ar[i]);
    }
    cout << ma;
}
