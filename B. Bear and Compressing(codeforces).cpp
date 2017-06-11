#include<bits/stdc++.h>
using namespace std;
struct add{
    string ke;
    char va;
};
int sol (vector<add> a, char no, int n){
    int re = 0;
    if(n == 0){
        if(no == 'a')return 1;
        return 0;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i].ke[0] == no){
            re += sol(a, a[i].va, n - 1);
        }
    }
    return re;
}

int main(){
    int n, q;
    scanf("%d%d", &n, &q);
    vector<add> ope;
    for(int i = 0; i < q ; i++){
        add x;
        string a;
        char b;
        cin >> a;
        cin >> b;
        x.ke = a;
        x.va = b;
        ope.push_back(x);
    }
    int re = 0;
    for(int i = 0; i < q; i++){
        int m = n - 2;
        char no = ope[i].va;
        re += sol(ope, no, m);
    }
    cout << re <<"\n";
}
