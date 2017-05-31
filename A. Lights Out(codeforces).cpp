#include<bits/stdc++.h>
using namespace std;
int main(){
    int nx []= {-1,1 ,0 , 0};
    int ny []= {0, 0 ,-1 , 1};
    int ar[3][3];
    int nu[3][3];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++){
            scanf("%d", &nu[i][j]);
            ar[i][j] = 1;
        }

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++){
            int x = i;
            int y = j;
            if(nu[i][j] & 1){
                ar[i][j] = !ar[i][j];
                for(int k = 0; k < 4; k++){
                    int x1, y1;
                    x1 = x + nx[k];
                    y1 = y + ny[k];
                    if(x1 >= 0 && x1 < 3 && y1 >= 0 && y1 < 3){
                        ar[x1][y1] = !ar[x1][y1];
                    }
                }
            }
        }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            cout << ar[i][j];
        cout <<"\n";
    }


}
