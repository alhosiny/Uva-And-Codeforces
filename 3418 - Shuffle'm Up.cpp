#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    scanf("%d", &n);
    int i = 1;
    while(n--){
        scanf("%d", &x);
        string s1 ,s2, s12;
        cin >> s1 >> s2 >> s12;
        string wo = "";
        int r;
        for(r = 0;r < 2 * x; r++){
            for(int j = 0;j < 2 * x; j++){
                if(j % 2 == 0){
                    wo += s2[j / 2];
                }
                else{
                    wo += s1[(j - 1) / 2];
                }
            }
            if(wo == s12)break;
            else{
                s1 = wo.substr(0, x);
                s2 = wo.substr(x);
                wo = "";
            }

        }

        printf("%d ", i);
        if(wo == s12){
           printf("%d\n", r + 1);
        }
        else
            printf("%d\n", -1);
        i++;
    }
}
