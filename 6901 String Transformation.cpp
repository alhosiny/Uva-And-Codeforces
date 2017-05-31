#include<bits/stdc++.h>
using namespace std;
int sol(string x, string y){
        if(x.size() != y.size())
           return -1;
        int nxa = 0, nxb = 0;
        int nya = 0, nyb = 0;
        for(int i = 0;i < x.size(); i++){
            if(x[i] == 'a')
               nxa++;
            else
               nxb++;

           if(y[i] == 'a')
               nya++;
            else
               nyb++;
        }
        if(nxa != nya || nyb != nxb)
           return -1;
        int re = 0;
        queue<char> as;
        queue<int> is;
        for(int i = 0;i < x.size(); i++){
            if(x[i] != y[i]){
               if(!as.size()){
                  as.push(x[i]);
                  is.push(i);
               }
               else{
                  if(as.front() == x[i]){
                     as.push(x[i]);
                     is.push(i);
                  }
                  else{
                     re += i - is.front();
                     is.pop();
                     as.pop();
                  }
               }
            }
        }
        return re;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        string x, y;
        cin >> x >> y;
        cout << sol(x, y) <<"\n";
    }
}
