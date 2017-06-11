#include<bits/stdc++.h>
using namespace std;
int gra[4001][4001];
int ar [4001];
int main(){
    vector<int> no;
    int n,m;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x , y;
        cin >> x;
        cin >> y;
        if(!ar[x])
            no.push_back(x);
        if(!ar[y])
            no.push_back(y);

        gra[x][y] = 1;
        ar[x]++;
        gra[y][x] = 1;
        ar[y]++;
    }

    int mi = 1e9;
    for(int i = 0; i < no.size(); i++){
        if(ar[no[i]] < 2)continue;
        for(int j = 0; j < 4001; j++){
            if(gra[no[i]][j] == 0)continue;
            for(int k = j + 1; k < 4001; k++){
                if(gra[no[i]][k] == 0)continue;
                if(gra[k][j] == 0)continue;
                mi = min(mi, ar[no[i]] + ar[k] + ar[j] - 6);
                gra[k][no[i]] = 0;
                gra[j][no[i]] = 0;
            }
        }
    }

    if(mi == 1e9)cout << -1;
    else   cout << mi;
}
