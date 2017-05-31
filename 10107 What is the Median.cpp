#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    vector<int> num;
    while(cin >> x){
        num.push_back(x);
        sort(num.begin(),num.end());
        if(num.size() % 2 == 0){
            cout << (num[num.size()/2] + num[num.size()/2-1])/2<<"\n";
        }
        else{
            cout << num[num.size()/2]<<"\n";
        }
    }
}
