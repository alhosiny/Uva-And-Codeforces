#include<bits/stdc++.h>
using namespace std;
vector<vector<int> >gra;
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    while(n || m){
        map<pair<int, int> ,int> mgra;
        gra = vector<vector<int> >(n + 1);
        map<int,  int> mar;
        vector<vector<int> > paths;
        for(int i = 0;i < m; i++){
            int x, y;
            scanf("%d%d", &x, &y);
            gra[x].push_back(y);
            gra[y].push_back(x);
            mgra[make_pair(x, y)] = 1;
            mgra[make_pair(y, x)] = 1;
        }
        for(int i = 1; i <= n; i++){
            if(mar[i])continue;
            mar[i] = 1;
            stack<int> pa;
            pa.push(i);
            while(pa.size()){
                int fr = pa.top();
                mar[fr] = 1;
                bool ne = 0;
                for(int j = 0;j < gra[fr].size(); j++){
                    if(mar[gra[fr][j]]){
                       bool ci = 0;
                       vector<int> cii ;
                       stack<int> c2;
                       while(!ci && pa.size()){
                             c2.push(pa.top());
                             cii.push_back(pa.top());
                             int frr = pa.top();
                             pa.pop();
                             if(frr == gra[fr][j]){
                                ci = 1;
                                break;
                              }
                        }
                        if(ci){
                           paths.push_back(cii);
                        }
                        while(c2.size()){
                            pa.push(c2.top());
                            c2.pop();
                        }
                    }
                    else{
                       pa.push(gra[fr][j]);
                       ne = 1;
                       break;
                    }
                }
                if(!ne){
                   pa.pop();
                }
            }
        }
        bool re = 0;
        int ar[n + 1];
        for(int i = 0;i <= n; i++)
            ar[i] = 0;
        for(int i = 0;i < paths.size(); i++){
            for(int in = 0; in < paths[i].size(); in++){
                ar[paths[i][in]] = 1;
            }
            stack<int> non;
            for(int j = 1;j <= n; j++){
                if(!ar[j]){
                   non.push(j);
                }
                ar[j] = 0;
            }
            int m1 = m;
            bool st = 1;
            while(st && non.size()){
                int val = non.top();
                int si = gra[val].size();
                if(gra[val].size() > paths[i].size()){
                    st = 0;
                    break;
                }
                for(int u = 0;u < paths[i].size(); u++)
                    if(mgra[make_pair(paths[i][u], val)]){
                       si--;
                       m1--;
                    }
                if(si != 0){
                    st = 0;
                    break;
                }
                non.pop();
            }
            if(st){
                if(m1 == paths[i].size() * ( paths[i].size() - 1) / 2)
                    re = 1;
            }
            if(re)break;
        }
        if(re)
            printf("Y\n");
        else
            printf("N\n");
        scanf("%d%d", &n, &m);
    }
}
