#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2, k, m;
    cin >> n1 >> n2 >> k >> m;
    vector<int> a;
    vector<int> b;
    for(int i = 0;i < n1; i++){
         int x;
         cin >> x;
         a.push_back(x);
    }
    for(int i = 0;i < n2; i++){
         int x;
         cin >> x;
         b.push_back(x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int sm = a[k - 1];
    int num = 0;
    for(int j = 0; j < n2;j++){
        if(b[j] > sm){
           num++;
        }
    }
    if(num >= m)cout <<"YES";
    else cout << "NO";

}
