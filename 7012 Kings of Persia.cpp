#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int f, s, f1, s1;
    while(a || b || c || d){
       f = abs(a - c);
       f1 = abs(a - d);
       s1 = abs(b - d);
       s = abs(b - c);
       cout << min(min(f, f1),min(s, s1)) <<" "<< max(max(f, f1),max(s, s1)) <<"\n";
       scanf("%d%d%d%d", &a, &b, &c, &d);
    }
}
