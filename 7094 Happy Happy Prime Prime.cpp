#include<bits/stdc++.h>
using namespace std;
int pri[10001];
int hp[10001];
bool hap(int x){
    map<int, int> mar;
    while(true){
        if(x == 1)return 1;
        if(mar[x])return 0;
        mar[x] = 1;
        int nx = 0;
        while(x > 0){
            nx += pow(x % 10,2);
            x /= 10;
        }
        x = nx;
    }
    return 0;
}
void civ(){
    for(int i = 2; i < 10001; i += 1 + (i & 1)){
        if(!pri[i]){
            long long z = i * i;
            while(z < 10001){
                pri[z] = 1;
                z += i;
            }
            if(hap(i)){
                hp[i] = 1;
            }
        }
    }
}
int main(){
    civ();
    int  p;
    scanf("%d",&p);
    for(int i = 1; i < p + 1; i++){
        int in;
        scanf("%d",&in);
        int num;
        scanf("%d",&num);
        printf("%d %d ",in,num);
        if(hp[num]){
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
}
