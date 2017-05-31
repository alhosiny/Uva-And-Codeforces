#include<bits/stdc++.h>
using namespace std;
int graph[101][101];
int mar[101];

void bfs(int e){
    memset(mar,0,sizeof(mar));
    queue<int> pat;
    mar[e] = 1;
    pat.push(e);
    while(pat.size()){
       int n = pat.front();
       pat.pop();
       for(int j=1;j < 101;j++){
           if(!mar[j]&& graph[n][j]){
                mar[j] = mar[n]+1;
                pat.push(j);
           }
       }
    }
}
int main(){
    int i,j,nt;
    nt = 1;
    cin >> i >>j;
    while(i||j){
        vector<int> nod;
        memset(graph,0,sizeof(graph));
        memset(mar,0,sizeof(mar));
        while(i||j){
            if(!mar[i]){
                 nod.push_back(i);
                 mar[i]=1;
            }
            if(!mar[j]){
                 nod.push_back(j);
                 mar[j]=1;
            }
            graph[i][j]=1;
            cin>> i >> j;
        }
        double avr = 0;
        for(int kk=0; kk< nod.size();kk++){
            bfs(nod[kk]);
            for(int qq = 0;qq < 101; qq++){
                if(mar[qq])
                   avr += mar[qq]-1;
                }
        }
        avr /= (nod.size()*(nod.size()-1));
        printf("Case %d: average length between pages = %.3f clicks\n",nt,avr);
        cin >> i>>j;
        nt++;
    }
    return 0;
}

