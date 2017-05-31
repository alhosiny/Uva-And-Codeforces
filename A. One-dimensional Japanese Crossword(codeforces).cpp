#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    vector<int> num;
    int sum = 0;
    for(int i = 0;i < n; i++){
        if(s[i] == 'W'){
            if(sum){
                num.push_back(sum);
                sum = 0;
            }
        }else{
             sum++;
        }
    }
    if(sum){
        num.push_back(sum);
    }
    cout << num.size() <<"\n";
    int i;
    for(i = 0;i < num.size(); i++){
        cout << num[i] << " ";
    }

}
