#include<bits/stdc++.h>
using namespace std;
int main(){
    int r, g, b;
    scanf("%d%d%d", &r, &g, &b);
    map<int, string> ma;
    vector<vector<int> >poi = vector<vector<int> >(16);
    poi[0].push_back(255);
    poi[0].push_back(255);
    poi[0].push_back(255);
    ma[0] = "White";
    poi[1].push_back(192);
    poi[1].push_back(192);
    poi[1].push_back(192);
    ma[1] = "Silver";
    poi[2].push_back(128);
    poi[2].push_back(128);
    poi[2].push_back(128);
    ma[2] = "Gray";
    poi[3].push_back(0);
    poi[3].push_back(0);
    poi[3].push_back(0);
    ma[3] = "Black";
    poi[4].push_back(255);
    poi[4].push_back(0);
    poi[4].push_back(0);
    ma[4] = "Red";
    poi[5].push_back(128);
    poi[5].push_back(0);
    poi[5].push_back(0);
    ma[5] = "Maroon";
    poi[6].push_back(255);
    poi[6].push_back(255);
    poi[6].push_back(0);
    ma[6] = "Yellow";
    poi[7].push_back(128);
    poi[7].push_back(128);
    poi[7].push_back(0);
    ma[7] = "Olive";
    poi[8].push_back(0);
    poi[8].push_back(255);
    poi[8].push_back(0);
    ma[8] = "Lime";
    poi[9].push_back(0);
    poi[9].push_back(128);
    poi[9].push_back(0);
    ma[9] = "Green";
    poi[10].push_back(0);
    poi[10].push_back(255);
    poi[10].push_back(255);
    ma[10] = "Aqua";
    poi[11].push_back(0);
    poi[11].push_back(128);
    poi[11].push_back(128);
    ma[11] = "Teal";
    poi[12].push_back(0);
    poi[12].push_back(0);
    poi[12].push_back(255);
    ma[12] = "Blue";
    poi[13].push_back(0);
    poi[13].push_back(0);
    poi[13].push_back(128);
    ma[13] = "Navy";
    poi[14].push_back(255);
    poi[14].push_back(0);
    poi[14].push_back(255);
    ma[14] = "Fuchsia";
    poi[15].push_back(128);
    poi[15].push_back(0);
    poi[15].push_back(128);
    ma[15] = "Purple";
    while(r != -1){
        int ib = 0;
        int dis = (int)1e9;
        for(int i = 0; i < 16; i++){
           double dis1 = sqrt(pow(poi[i][0] - r, 2) + pow(poi[i][1] - g, 2) + pow(poi[i][2] - b, 2));
           if(dis1 < dis){
              ib = i;
              dis = dis1;
           }
        }
        cout << ma[ib] <<"\n";

        scanf("%d%d%d", &r, &g, &b);
    }
}
