#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[26];
    for(int i = 0; i < 26; i++)
        ar[i] = 0;
    int n;
    cin >> n;
    string hh;
    getline(cin,hh);
    while(n){
        string li;
        getline(cin,li);
        for(int i=0; i < li.size(); i++){
            if(isalpha(li[i]))
                ar[toupper(li[i])-'A']++;
        }
        n--;
    }
    for(int i1 =0; i1 <  26; i1++){
        int ma = 0;
        char p;
        for(int i =0; i < 26; i++){
            if(ar[i]!= 0 && ar[i] > ma){
                ma = ar[i];
                p = (char)('A' + i);
            }
        }
        if(!ma)break;
        cout << p<<" "<<ma<<"\n";
        ar[p -'A'] = 0;
    }
    return 0;
}
