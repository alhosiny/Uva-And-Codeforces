#include<bits/stdc++.h>
using namespace std;
bool dis(int  y){
     map<int , int> mar;
     while(y > 0){
        int f = y %10;
        if(mar[f])return 0;
        mar[f] = 1;
        y /= 10;
     }
     return 1;
}

int main(){
    int y;
    scanf("%d", &y);
    while(true){
        y++;
        if(dis(y)){
           cout << y;
           return 0;
        }
}




}
