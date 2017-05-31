#include<bits/stdc++.h>
using namespace std;
map<pair<int,int> ,long long> gra;
int main(){
    int t;
    scanf("%d", &t);
    int in = 1;
    gra[make_pair(0,0)] = 1;
    for(int i = 0;i < 1e6; i++)
        for(int j = 0;j < 1e6; j++){
            if(j - 1 >= 0)
               gra[make_pair(j ,i)] +=  gra[make_pair(j - 1, i)];
            if(i - 1 >= 0)
                gra[make_pair(j,i)] +=  gra[make_pair(j, i - 1)];
        }

    while(t){
        int n, m, k;
        scanf("%d%d%d", &n, &m, &k);
        map<pair<int,int> ,int> mar;
        vector<pair<int,int>> ma;
        long long re = gra[make_pair(n - 1, m -1)];
        for(int i1 = 0; i1 < k; i1++){
            int x, y;
            scanf("%d%d", &x, &y);
            x--;
            y--;
            ma.push_back(make_pair(x,y));
            int mx[]= {-1,-1,-1,0,0,1,1,1};
            int my[]= {-1,0,1,-1,1,-1,0,1};
            for(int i = 0; i < 8 ;i++){
                int nx, ny;
                nx = x + mx[i];
                ny  = y + my[i];
                if(nx < 0 || ny < 0)continue;
                mar[make_pair(nx, ny)] = 1;
            }
        }
        for(int y = 0;y < ma.size(); y++){
            int mx[]= {-1,0,1, 1 , 1 , 1};
            int my[]= {1,1,1,-1,0,1};
            int nx ,ny;
            for(int j = 0;j < 3; j++){
                nx = ma[y].first + mx[j];
                ny = ma[y].second + my[j] + 1 ;
                if(mar[make_pair(nx,ny)] || nx >= n || ny >= m)continue;
                for(int  u = 0;u <= j ;u++){
                    re -= gra[make_pair(ma[y].first + mx[u], ma[y].second + my[u])];
                }
            }
            for(int j = 3;j < 6; j++){
                nx = ma[y].first + mx[j] + 1;
                ny = ma[y].second + my[j];
                if(mar[make_pair(nx,ny)] || nx >= n || ny >= m)continue;
                for(int  u = 3;u <= j ;u++){
                    re -= gra[make_pair(ma[y].first + mx[u], ma[y].second + my[u])];
                }
            }
        }
        printf("Case #%d: %d\n",in, re%997);
        in++;
        t--;
    }
}
