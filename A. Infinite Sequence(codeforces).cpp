#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long k = 1;
    long long number = 2;
    while(k < n){
        k += number;
        number++;
    }
    while(k > n){
        k--;
        number--;
    }
    cout << --number ;

}
