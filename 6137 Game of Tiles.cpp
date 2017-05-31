#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ar;
pair<int,int> dfs(int i, int j,int n,int m){
    int cx[] = {-1,0,0,1};
    int cy[] = {0,-1,1,0};
    map<int,int> mar;
    int vis[n][m];
    for(int i=0;i < n;i++){
        for(int j =0;j < m;j++){
            vis[i][j]=0;
        }
    }
    stack<pair<int,int>> de;
    de.push(make_pair(i,j));
    while(de.size()){
          int i1 = de.top().first;
          int j1 = de.top().second;
          cout << i1 <<" "<<j1<<"\n";
          vis[i1][j1] = 1;
          for(int y=0;y < 4;y++){
              int i2 = i1 + cx[y];
              int j2 = j1 + cy[y];
              if(i2 >= 0 && i2 < n && j2 >= 0&& j2 < m && vis[i2][j2] == 0 && ar[i2][j2] == 1){
                 de.push(make_pair(i2,j2));
                 break;
              }
          }
          if(i1 == de.top().first && j1 == de.top().second){
             mar[de.size() % 2]++;
             de.pop();
          }
    }
    pair<int,int> h = make_pair(0,0);
    pair<int, int>fd = make_pair(mar[1],mar[0]);
    return fd;
}


int main(){
    int n,m;
    while(cin >> n){
       cin >> m;
       int t = 0;
       ar = vector<vector<int>>(10000);
       for(int i=0;i < n;i++){
          for(int j = 0;j < m;j++){
              char s;
              cin >> s;
              if(s == '.'){
                ar[i].push_back(1);
                t++;
              }else
                ar[i].push_back(0);
          }
       }
       if(t == n * m){
         if(n*m % 2 == 0)
            cout << 2<<"\n";
         else
            cout << 1 <<"\n";
       }
       else{
         pair<int,int> as = make_pair(0,0);
         for(int i =0;i < n;i++){
           for(int j = 0;j < m;j++){
               if(ar[i][j]==1){
                  pair<int,int> as1 = dfs(i,j,n,m);
                  as = make_pair(as.first + as1.first,as.second+as1.second);
                  break;
               }
           }
         }
         if(as.first >= as.second)cout << 1<<"\n";
         else cout << 2<<"\n";
       }
    }
}
