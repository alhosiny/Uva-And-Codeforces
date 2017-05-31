#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dis(ll x1,ll y1,ll x2,ll y2){
    ll nu1 = (x2-x1)*(x2-x1);
    ll nu2 = (y2-y1)*(y2-y1);
    return (nu1+nu2);
}

int main(){
    int n;
    cin >> n;
    while(n){
          vector<vector<ll>> po;
          int re = 0;
          for(int i=0;i < n;i++){
              vector<ll>poi;
              ll x,y;
              cin >> x>>y;
              poi.push_back(x);
              poi.push_back(y);
              po.push_back(poi);
          }
          for(int i=0;i < po.size();i++){
              set<ll> distan;
              map<ll,int> n1;
              for(int j = 0;j < po.size();j++){
                  if(i == j) continue;
                  ll x = dis(po[i][0],po[i][1],po[j][0],po[j][1]);
                  distan.insert(x);
                  n1[x]++;
              }
              int si = distan.size();
              while(si){
                    set<ll>::iterator it = distan.begin();
                    ll ele = *it;
                    re += (n1[ele]-1)*n1[ele]/2;
                    distan.erase(distan.begin());
                    si = distan.size();
              }
          }
          cout << re<<"\n";
          cin >> n;
    }
}
