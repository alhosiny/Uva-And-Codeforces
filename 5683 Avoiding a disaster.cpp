#include<bits/stdc++.h>
using namespace std;
int main(){
    int k ;
    scanf("%d", &k);
    while(k--){
        string ar[3];
        cin >> ar[0] >> ar[1] >> ar[2];
        pair<int, int> tim[3];
        for(int i = 0;i < 3; i++){
            stringstream q;
            q << ar[i];
            int num;
            q >> num;
            tim[i].first = num ;
            char aa;
            q >> aa;
            q >> num;
            tim[i].second = num;
        }
        int re = 0;
        int ii = 0;
        for(int i = 0;i < 3; i++){
            int nh = tim[i].first;
            int nm = tim[i].second;
            for(int j = 1; j < 481; j++){
                nm++;
                if(nm == 60){
                   nh++;
                   nm = 0;
                }
                if(nh > 12)
                   nh -= 12;
                if(nh == tim[(i + 1) % 3].first && nm == tim[(i + 1) % 3].second){
                   int nh2 = tim[i].first;
                   int nm2 = tim[i].second;
                   for(int u = 1;u < 481; u++){
                       if(nm2 == 0){
                          nh2--;
                          nm2 = 59;
                       }
                       else{
                          nm2--;
                       }
                       if(nh2 == 0){
                          nh2 = 12;
                       }
                       if(u == j && nh2 == tim[(i + 2) % 3].first && nm2 == tim[(i + 2) % 3].second){
                          re++;
                          ii = i;
                          break;
                       }
                   }
                   break;
                }
                if(nh == tim[(i + 2) % 3].first && nm == tim[(i + 2) % 3].second){
                   int nh2 = tim[i].first;
                   int nm2 = tim[i].second;
                   for(int u = 1;u < 481; u++){
                       if(nm2 == 0){
                          nh2--;
                          nm2 = 59;
                       }
                       else{
                          nm2--;
                       }
                       if(nh2 == 0){
                          nh2 = 12;
                       }
                       if(u == j && nh2 == tim[(i + 1) % 3].first && nm2 == tim[(i + 1) % 3].second){
                          re++;
                          ii = i;
                          break;
                       }
                   }
                   break;
                }
             }
        }
        if(re == 0 || re > 1){
           printf("Look at the sun\n");
        }
        else{
           if(tim[ii].second > 9)
              printf("The correct time is %d:%d\n", tim[ii].first, tim[ii].second);
           else
              printf("The correct time is %d:0%d\n", tim[ii].first, tim[ii].second);
        }
    }
}
