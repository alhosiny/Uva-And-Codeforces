#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int> > ar;

int main(){
    int n ;
    scanf("%d",&n);
    while(n){
         int x, y;
         scanf("%d%d",&x,&y);
         ar.push_back(make_pair(x,y));
         n--;
    }
    int re = 0;
    for(int i = 0;i < ar.size(); i++)
        for(int j = 0;j < ar.size(); j++){
            if(i == j)continue;
            if(ar[i].first == ar[j].second){
               re++;
            }
        }

    cout << re;
}
