#include<bits/stdc++.h>
using namespace std;
bool sor(vector<int> x, vector<int> y){
     return x.size() > y.size();
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
          int n, k, f;
          scanf("%d%d%d", &n, &k, &f);
          int ar[n+1][n+1];
          for(int i = 0;i < n + 1; i++)
             for(int j = 0;j < n + 1; j++)
                 ar[i][j] = 0;

          vector<vector<int> > paths;
          map<int, int> mar;
          vector<queue<int> >gra;
          gra = vector<queue<int> >(n + 1);
          while(f--){
               int x, y;
               scanf("%d%d", &x, &y);
               gra[x].push(y);
               gra[y].push(x);
               ar[x][y] = 1;
               ar[y][x] = 1;
          }
          for(int i = 1; i <= n; i++){
              if(mar[i])continue;
              stack<int> path;
              path.push(i);
              mar[i] = 1;
              while(path.size()){
                    bool tr = 1;
                    int to = path.top();
                    while(gra[to].size()){
                       if(mar[gra[to].front()]){
                          int fr = gra[to].front();
                          bool t2 = 0;
                          vector<int> spath;
                          stack<int> path2;
                          while(path.size()){
                               spath.push_back(path.top());
                               path2.push(path.top());
                               if(path.top() == fr){
                                  path.pop();
                                  t2 = 1;
                                  break;
                               }
                               path.pop();
                          }
                          if(t2){
                             paths.push_back(spath);
                          }
                          while(path2.size()){
                                path.push(path2.top());
                                path2.pop();
                          }
                          gra[to].pop();
                       }
                       else{
                            mar[gra[to].front()] = 1;
                            path.push(gra[to].front());
                            gra[to].pop();
                            tr = 0;
                            break;
                       }
                    }
                    if(tr)
                       path.pop();
              }
          }
          sort(paths.begin(), paths.end(), sor);
          int re = 0;
          for(int j = 0;j < paths.size(); j++){
              bool trr = 1;
              for(int ii = 0; ii < paths[j].size(); ii++){
                  int sum = 0;
                  for(int i1 = 0; i1 < paths[j].size(); i1++){
                      if(ar[paths[j][ii]][paths[j][i1]])
                         sum++;
                  }
                  if(sum < k){
                     trr = 0;
                     break;
                  }
              }
              if(trr){
                 re = paths[j].size();
                 break;
              }
          }
          cout << re <<"\n";
    }
}
