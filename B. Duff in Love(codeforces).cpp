#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long re = 1;
    long long i = 2;
    while(n > 1){
        int sq = sqrt(n);
        bool pr = 1;
        for(; i <= sq; i += 1 + (1 & i)){
            if(n % i == 0){
                pr = 0;
                break;
            }
        }
        if(!pr)
            re *= i;
        else{
            re *= n;
            break;
        }
        while(n % i == 0){
            n /= i;
        }
    }
    cout << re;
}
