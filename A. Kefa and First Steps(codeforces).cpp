#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int ar[n + 1];
    int le[n + 1];
    for(int i = 1;i <= n; i++){
        scanf("%d", &ar[i]);
    }
    le[0] = 0;
    le[1] = 1;
    for(int i = 2; i <= n; i++){
        if(ar[i] >= ar[i - 1]){
            le[i] = le[i - 1] + 1;
        }
        else
            le[i] = 1;
    }
    int re = *max_element(le, le + n + 1);
    cout << re <<"\n";

}
