#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    if(n % 2 == 1)
        cout <<  0;
    else{
        n /= 2;
        if(n % 2 == 0){
            n /= 2;
            n--;
        }
        else{
            n /= 2;
        }
        cout << n;
    }
}
