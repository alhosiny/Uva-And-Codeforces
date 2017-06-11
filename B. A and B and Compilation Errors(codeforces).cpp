#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d" , &n);
    vector<int> num;
    vector<int> num1;
    vector<int> num2;
    int i = 0;
    while(i < 3){
        for(int j = 0; j < n; j++){
            int x;
            scanf("%d" , &x);
            if(i == 0)
                num.push_back(x);
            else if(i == 1)
                num1.push_back(x);
            else if(i == 2)
                num2.push_back(x);
        }
        n--;
        i++;
    }
    int f = 0, s = 0;
    sort(num.begin(),num.end());
    sort(num1.begin(),num1.end());
    sort(num2.begin(),num2.end());
    for(int i = 0; i < num1.size(); i++){
        if(num[i] != num1[i]){
            f = num[i];
            break;
        }
    }
    if(f == 0)
        f = num[num.size() - 1];
    for(int i = 0; i < num2.size(); i++){
        if(num1[i] != num2[i]){
            s = num1[i];
            break;
        }
    }
    if(s == 0)
        s = num1[num1.size() - 1];

    cout << f <<"\n";
    cout << s <<"\n";
}
