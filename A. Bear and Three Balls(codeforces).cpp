#include<bits/stdc++.h>
using  namespace std;
int main(){
    int n;
    scanf("%d", &n);
    vector<int> q;
    for(int j = 0;j < n ;j++){
        int x;
        scanf("%d", &x);
        q.push_back(x);
    }
    sort(q.begin(), q.end());
    int si = 0;
    int  p = 0;
    for(int e = 1; e < q.size(); e++){
        if(q[e] != q[p]){
            q[p + 1] = q[e];
            p++;
        }
    }

    int i = 0;
    bool re = 0;
    while(i < p - 1){
        int x = q[i], y = q[i + 1], z = q[i + 2];
        int r1 = y - x;
        int r2 = z - x;
        int r3 = z - y;
        if(r1 <= 2 && r1 > 0 && r2 <= 2 && r2 > 0 && r3 <= 2 && r3 > 0){
            re = 1;
            break;
        }
        i++;
    }
    if(re)
        cout << "YES\n";
    else
        cout << "NO\n";
}
