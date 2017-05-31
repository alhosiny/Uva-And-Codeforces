#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    while(n|| m){
        int mat[n][m];
        memset(mat,-1,sizeof(mat));
        int ro[n];
        int co[m];
        int d[n+m-1];
        int u[n+m-1];
        int vr[n];
        int vc[m];
        int vd[n+m-1];
        int vu[n+m-1];
        int nm1 = n * m ;
        for(int i=0;i < n;i++)
           cin >> ro[i];
        for(int i=0;i < m;i++)
           cin >> co[i];
        for(int i=0;i < m+n-1;i++)
           cin >> d[i];
        for(int i=0;i < m+n-1;i++)
           cin >> u[i];
        while(nm1){
            for(int i =0;i < n ;i++)
              for(int j =0; j < m; j++){
                 if(mat[i][j]== -1) {
                    vr[i]++;
                    vc[j]++;
                    }else if(mat[i][j]== 1) {
                           vr[i]--;
                           vc[j]--;
                    }
              }
            int u1 = n - 1;
            for(int i = 0;i < m + n - 1;i++){
                int jr = 0;
                int fc = u1;
                while(jr < n){
                    if( jr >= 0 && jr <= n && fc >= 0 && fc <= m){
                       if(mat[jr][fc]== -1)
                           vd[i]++;
                        else if(mat[jr][fc]== 1)
                           d[i]--;
                    }
                    jr++;
                    fc++;
                }
                    u1--;
            }
            int ir = 0;
            int fc1 = 0;
            for(int i= 0; i < n+m-1; i++){
                int rw = ir;
                int cw = fc1;
                while(rw >= 0){
                   if( rw >=0 && rw <= n&& cw >= 0 && cw <= m){
                      if(mat[rw][cw]== -1)
                         vu[i]++;
                      else if (mat[rw][cw]== 1)
                         u[i]--;
                    }
                    cw++;
                    rw--;
                }
                ir++;
           }
           for(int i = 0; i < n; i++){
              if(ro[i] == 0){
                 for(int j=0;j < m;j++)
                    if(mat[i][j] == -1){
                       mat[i][j] = 0;
                       nm1--;
                    }
               }else if(ro[i] == vr[i]){
                     for(int j=0;j < m;j++)
                        if(mat[i][j] == -1){
                           mat[i][j] = 1;
                           nm1--;
                        }
                }
           }

          for(int i = 0; i < m; i++){
              if(co[i] == 0){
                 for(int j=0;j < n;j++)
                    if(mat[j][i] == -1){
                       mat[j][i] = 0;
                       nm1--;
                    }
              }else if(co[i] == vc[i]){
                    for(int j=0;j < m;j++)
                        if(mat[j][i] == -1){
                           mat[j][i] = 1;
                           nm1--;
                        }
                    }
           }
       }
    }
}
