#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    scanf("%d", &k);
    int in = 1;
    while(k--){
         int n;
         scanf("%d", &n);
         int y1 = 0, y2 = 0, y3 = 0, y4 = 0;
         string na;
         getline(cin , na);
         for(int i = 0;i < n ; i++){
             int nr = 0;
             int ns = 0;
             string sol;
             getline(cin , na);
             if(na.find(" ") != -1)
                na = na.substr(na.find(" ") + 1);
             else
                na = "";
             while(na.size()){
                 ns++;
                 if(na.find(" ") != -1){
                    sol = na.substr(0, na.find(" "));
                    na = na.substr(na.find(" ") + 1);
                    if(sol == "n" || sol == "no"){
                        nr++;
                    }
                 }
                 else{
                    if(na == "n" || na == "no"){
                        nr++;
                    }
                    na = "";
                 }
             }
             if(nr == 5)
                y3++;
             if(ns == 0){
                y4++;
              }
              else{
                if(ns == 1 && nr == 0)
                    y1++;
                else if(ns > nr)
                      y2++;
              }
         }
         cout << "Roll-call: "<<in <<"\n";
         printf("Present: %d out of %d\n", y1,n);
         printf("Needs to study at home: %d out of %d\n", y2 ,n);
         printf("Needs remedial work after school: %d out of %d\n",y3, n);
         printf("Absent: %d out of %d\n", y4, n);
         in++;
    }
}
