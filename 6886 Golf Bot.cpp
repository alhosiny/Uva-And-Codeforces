#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    while(cin >> n){
          vector<int> nu;
          vector<int> mu;
          map<int ,int> mar;
          for(int i = 0;i < n; i++){
              int x;
              scanf("%d", &x);
              nu.push_back(x);
          }
          scanf("%d", &m);
          for(int i = 0;i < m; i++){
              int x;
              scanf("%d", &x);
              mu.push_back(x);
          }
          sort(nu.begin(), nu.end());
          sort(mu.begin(), mu.end());
          int fi = ceil(mu[mu.size() - 1] * 1.0 / 2);
          int in = 0;
          while(nu[in] <= fi){
                mar[nu[in]] = 1;
                for(int i = in ; i < nu.size(); i++){
                    mar[nu[in] + nu[i]] = 1;
                }
                in++;
          }
          int re = 0;
          for(int i = 0; i < mu.size(); i++){
              if(mar[mu[i]])
                 re++;
          }
          cout << re <<"\n";
    }
}
