#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0;i < n; i++){
       scanf("%d", &ar[i]);
    }
    for(int i = 0;i < n - 1; i++){
        cout << ar[i] + ar[i + 1] <<" ";
    }
    cout << ar[n - 1];
}
