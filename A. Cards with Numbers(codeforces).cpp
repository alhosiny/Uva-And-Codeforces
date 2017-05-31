#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > ar;
int num[5001];
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ar = vector<vector<int> > (50000);
    int n;
    scanf("%d",&n);
    int siz = 2 * n;
    for(int y = 1;y <= siz;y++){
        int el;
        scanf("%d",&el);
        ar[el].push_back(y);
        num[el]++;
    }
    bool q = 1;

    for(int i = 1;i <= 5000; i++){
        if(num[i] % 2 != 0) {
           q = 0;
           break;
        }
    }

    if(!q){
        cout << -1 <<"\n";
    }
    else{
        for(int i = 1;i <= 5000;i++){
            int si = num[i];
            if(si != 0){
                int j = 0;
                while(j + 1 < si){
                    printf("%d %d\n",ar[i][j],ar[i][j+1]);
                    j+=2;
                }
            }
        }
    }
    fclose (stdout);
}
