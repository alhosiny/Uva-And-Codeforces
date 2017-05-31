#include<bits/stdc++.h>
using namespace std;
int ho[51];
int ve[51];

int main(){
    int n;
    scanf("%d", &n);
    int re = 1;
    n = n * n;
    while(n--){
        int x, y;
        scanf("%d%d", &x, &y);
        if(!ho[x] && !ve[y]){
            ho[x] = 1;
            ve[y] = 1;
            cout << re;
            if(n)
               cout <<" ";
        }
        re++;
    }

}
