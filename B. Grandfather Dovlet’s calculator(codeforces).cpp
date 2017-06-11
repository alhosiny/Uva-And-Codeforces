#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[10];
    ar[0] = 6;
    ar[1] = 2;
    ar[2] = 5;
    ar[3] = 5;
    ar[4] = 4;
    ar[5] = 5;
    ar[6] = 6;
    ar[7] = 3;
    ar[8] = 7;
    ar[9] = 6;
    int a, b;
    scanf("%d%d", &a, &b);
    long long re = 0;
    for(int i = a;i <= b; i++){
        int j = i;
        while(j != 0){
            re += ar[j % 10];
            j /= 10;
        }
    }
    cout << re;
}
