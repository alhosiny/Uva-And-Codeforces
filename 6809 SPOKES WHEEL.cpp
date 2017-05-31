#include<bits/stdc++.h>
using namespace std;
string htob(string f){
    string s = "0x";
    s += f;
    stringstream ss;
    ss << hex << s;
    unsigned n;
    ss >> n;
    bitset<32> b(n);
    return  b.to_string();
}

int main(){
    int t;
    scanf("%d", &t);
    int in = 1;
    while(t--){
          printf("Case #%d: ",  in);
          string f , e;
          cin >> f >> e;
          string bf = htob(f);
          string be = htob(e);
          string t1 = bf , t2 = be;
          sort(t1.begin(), t1.end());
          sort(t2.begin(), t2.end());
          if(t1 != t2)
             cout << "Not possible\n";
          else{
             string l = bf, r = bf;
             int re = 0;
             while(l != be && r != be){
                   re++;
                   string nl = l.substr(1);
                   nl += l[0];
                   l = nl;
                   string nr = "";
                   nr += r[r.size() - 1];
                   nr += r.substr(0, r.size() - 1);
                   r = nr;
             }
             cout << re;
             if(l == be && r == be){
                cout << " Any\n";
             }
             else if(l == be){
                cout << " Left\n";
             }
             else{
                cout << " Right\n";
             }
          }
          in++;
    }
}
