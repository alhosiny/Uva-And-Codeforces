#include<bits/stdc++.h>
using namespace std;
int main(){
    string ar[] = { "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
    string f , e;
    cin >> f >> e;
    int fir = 0;
    for(int i = 0;i < 7; i++){
        if(ar[i] == f){
            fir = i;
            break;
        }
    }
    bool q = 0;
    int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for(int i = 0;i < 12; i++){
        int wan = (fir + month[i]) % 7;
        if(ar[wan] == e){
            q = 1;
            break;
        }
    }
    if(q){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
