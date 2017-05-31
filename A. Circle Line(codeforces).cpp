#include<bits/stdc++.h>
using namespace std;
int ar[101];
int n;
int dis(int s , int t){
    int re = 0;
    int no = s;
    while(no != t){
       re += ar[no];
       no++;
       if(no == n)
          no = 0;
    }
    return re;
}

int main(){
    scanf("%d", &n);
    for(int i = 0;i < n; i++)
        scanf("%d", &ar[i]);
    int s , t;
    scanf("%d%d", &s, &t);
    s--;
    t--;
    cout << min(dis(s,t), dis(t,s));
}
