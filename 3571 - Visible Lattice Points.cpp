#include<bits/stdc++.h>
using namespace std;
int main(){
     int **ar = new int*[1001];
     for (int i = 0 ; i < 1001 ; i++)
         ar[i] = new int[1001];
     for(int i = 0;i < 1001; i++)
         for(int j = 0;j < 1001; j++)
             ar[i][j] = 0;
     ar[0][0] = 1;
     for(int i = 0;i < 1001; i++)
        for(int j =0;j < 1001; j++){
           if(ar[i][j] == -1)continue;
           if(ar[i][j] == 0 && !(i == 0 && j == 0)){
              ar[i][j] = 1;
              int q = 2;
              while(1){
                 if(q * i >= 1001 || q * j >= 1001)break;
                 ar[i * q][j * q] = -1;
                 q++;
              }
          }
       }
       int ar1[1001];
       ar1[1] = 4;
       for(int y = 2; y < 1001; y++){
           ar1[y] = ar1[y - 1];
           for(int k = 0; k <= y; k++){
               if(ar[y][k] == 1)ar1[y]++;
               if(ar[k][y] == 1)ar1[y]++;
           }
       }
       int n;
       scanf("%d", &n);
       int x;
       int i = 1;
       while(n--){
          scanf("%d", &x);
          printf("%d %d %d\n",i, x, ar1[x] - 1);
          i++;
    }
}
