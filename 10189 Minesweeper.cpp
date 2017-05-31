#include<bits/stdc++.h>
using namespace std;
int main(){
int nt = 1;
int n, m;
cin >> n;
cin >> m;
   while(n || m){

         char ar[n][m];
         for(int i =0;i < n;i++){
            for(int j =0;j < m; j++){
                cin >> ar[i][j];
            }
         }
         int ar1[n][m];
         int x[] = {-1, -1, -1, 0, 0, 1, 1, 1};
         int y[] = {-1, 0, 1, -1, 1,-1, 0, 1};
         for(int i = 0;i < n; i++){
            for(int j = 0;j < m; j++){
                if(ar[i][j] == '*') ar1[i][j] = -1;
                else{
                    int num = 0;
                    for(int u =0;u < 8; u++){
                        int x1 = i + x[u];
                        int y1 = j + y[u];
                        if(x1 >= 0 && x1 < n && y1 >= 0 && y1 < m && ar[x1][y1] == '*')
                            num++;
                    }
                    ar1[i][j] = num;
                }
            }
         }
         printf("Field #%d:\n",nt);
         for(int i = 0;i < n; i++){
            for(int j = 0;j < m; j++){
                if(ar1[i][j] == -1)
                cout << "*";
                else
                    cout << ar1[i][j];
            }
            cout <<"\n";
         }
         nt++;
         cin >> n >> m;
         if(n || m)
            cout <<"\n";
      }
}
