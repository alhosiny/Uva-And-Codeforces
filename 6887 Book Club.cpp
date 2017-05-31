#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m ;
    while(cin >> n >> m){
          map<int, int> mar;
          map<int,vector<int> > ar;
          map<pair<int,int> ,int> sh;
          for(int i = 0;i < m; i++){
               int a, b;
               scanf("%d%d", &a,&b);
               ar[a + 1].push_back(b + 1);
          }

          bool t = 1;
          for(int i = 1;i <= n; i++){
              while(mar[i] < ar[i].size()){
                    mar[i]++;
                    int in = ar[i][mar[i] - 1];
                    if(sh[make_pair(i,in)]){
                       continue;
                    }
                    vector<int> pa;
                    pa.push_back(i);
                    pa.push_back(in);
                    queue <vector<int> >all;
                    all.push(pa);
                    vector<int> pat;
                    while(all.size()){
                          vector<int> fi = all.front();
                          if(fi[fi.size() - 1] == i){
                             pat = fi;
                             break;
                          }
                          all.pop();
                          for(int j = 0;j < ar[fi[fi.size() - 1]].size(); j++){
                              vector<int> se = fi;
                              if(find(se.begin(), se.end(), ar[fi[fi.size() - 1]][j]) == se.end() &&
                                      !sh[make_pair(fi[fi.size() - 1],ar[fi[fi.size() - 1]][j])]){
                                      se.push_back(ar[fi[fi.size() - 1]][j]);
                              }
                              else if(ar[fi[fi.size() - 1]][j] == i){
                                      se.push_back(i);
                              }
                              all.push(se);
                          }
                    }
                    if(!pat.size()){
                       t = 0;
                       cout << "NO\n";
                       break;
                    }
                    else{
                       for(int i = 0; i + 1< pat.size(); i++)
                           sh[make_pair(pat[i],pat[i + 1])] = 1;
                       }
              }
              if(!t)break;
          }
          if(t)
            cout << "YES\n";
    }
}

