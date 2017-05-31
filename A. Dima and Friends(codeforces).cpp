#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        sum += x;
    }
    n++;
    int re = 0;
    for(int i = 1;i <= 5; i++){
        if((sum + i) % n != 1){
           re++;
        }
    }
    cout << re;
}
