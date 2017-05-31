#include<bits/stdc++.h>
using namespace std;
map<int, pair<int, int> > mar;
int main(){
   int i = 1;
   for(int j = 0;j < 4; j++)
       for(int k = 0;k < 3; k++){
           mar[i] = make_pair(j,k);
           i++;
       }
   mar[0] = make_pair(3,1);
   vector<int> avl;
   for(int i = 1;i < 10; i++){
       avl.push_back(i);
       for(int j = i; j <= 10; j++){
           if(mar[i].first > mar[j % 10].first|| mar[i].second > mar[j % 10].second) continue;
           avl.push_back(i * 10 + j % 10);
           for(int k = j; k <= 10; k++){
               if(mar[j % 10].first >  mar[k % 10].first|| mar[j % 10].second > mar[k % 10].second) continue;
               avl.push_back(i * 100 + (j % 10) * 10 + (k % 10));
           }
       }
   }
   sort(avl.begin(),avl.end());
   int t;
   scanf("%d", &t);
   while(t){
       int n;
       scanf("%d", &n);
       int f = lower_bound (avl.begin(), avl.end(), n) - avl.begin();
       int s = upper_bound (avl.begin(), avl.end(), n) - avl.begin();
       int mi ;
       if(abs(avl[s] - n) <= abs(avl[f] - n) ){
          mi = avl[s];
       }
       else{
          mi = avl[f];
       }
       if(s - 1 >= 0 && abs(avl[s - 1] - n) < abs(mi - n)){
          mi = avl[s - 1];
       }
       cout << mi <<"\n";
       t--;
   }
}
