#include<bits/stdc++.h>
using namespace std;
int ar[501][501];
map<int, int> dele;
int dij(int f,int n){
    int len[n];
    for(int i = 0; i < n; i++)
        len[i] = -1;
    len[f]=0;

    priority_queue<pair<int,int> > path;
    path.push(make_pair(0,f));

    while(path.size()){
        int co = path.top().first* -1;
        int no = path.top().second;
        path.pop();
        for(int i = 0; i < n; i++){
            if(!dele[i] && ar[no][i]){
                if((len[i] == -1 || len[i] > co + ar[no][i])){
                    len[i] = co + ar[no][i];
                    path.push(make_pair(len[i]* -1, i));
                }
            }
        }
    }
    int re = 0;
    for(int  i =0; i < n; i++){
        if(len[i] != -1){
            re += len[i];
        }
    }
    return re;
}


int main(){
    int n;
    scanf("%d",&n);
    for(int i =0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d",&ar[i][j]);
        }
    }
    int d;

    for(int i1 =0; i1 < n-1; i1++){
        int re = 0;
        for(int i = 0; i < n; i++){
            if(!dele[i])
                re += dij(i,n);
        }
        printf("%d ",re);
        scanf("%d",&d);
        dele[d-1] = 1;
    }
    scanf("%d",&d);
    printf("%d",0);
}

