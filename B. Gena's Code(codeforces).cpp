#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int no = 0;
    string fi = "1";
    bool ze = 0;
    for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        if(x == "0")
            ze = 1;
        int n1 = 0;
        int n0 = 0;
        for(int u = 0; u < x.size(); u++){
            if(x[u] == '1')n1++;
            else if(x[u] == '0')n0++;
        }
        if(n1 > 1 || (n1 + n0) != x.size())
            fi = x;

        else{
            no += x.size() - n1;
        }
    }
    if(ze)cout <<0;
    else{
        cout << fi;
        for(int i = 0; i < no ; i++)
            cout <<'0';
    }
}
