#include<bits/stdc++.h>
using namespace std;
int main(){
    int w , n;
    scanf("%d%d", &w, &n);
    int ii = 1;
    while(w || n){
          int ma = 0;
          map<string , int> mar;
          map<string , int> hi;
          map<string , int> wi;
          vector<string> sr;
          for(int i = 0;i < n;i++){
              string x;
              int c;
              cin >> x;
              scanf("%d", &c);
              ma = max(ma, c);
              sr.push_back(x);
              mar[x] = c;
          }
          for(int i = 0; i < n; i++){
              int h = 8 + ceil(40.0 * (mar[sr[i]] - 4) / (ma - 4));
              hi[sr[i]] = h;
              wi[sr[i]] = ceil(9.0 * (int)(sr[i].size()) * h/ 16);
          }
          int in = 0;
          int fh = 0;
          while(in < n){
             int fw = wi[sr[in]];
             int mh = hi[sr[in]];
             in++;
             while(in < n && fw + 10 + wi[sr[in]] <= w){
                  mh = max(mh, hi[sr[in]]);
                  fw += 10 + wi[sr[in]];
                  in++;
             }
             fh += mh;
          }
          printf("CLOUD %d: %d\n",ii,fh);
          scanf("%d%d", &w, &n);
          ii++;
    }
}
