#include<bits/stdc++.h>
using namespace std;
int count_date(string s, string fin){
    int ind = s.find(fin);
    int count_fin = 0;
    while(ind != -1){
        count_fin++;
        s = s.substr(ind + 8);
        ind = s.find(fin);
    }
    return count_fin;
}


int main(){
    string s;
    cin >> s;
    string re = "";
    int ma_re = 0;
    int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30,31};
    string years[] = {"2013","2014" ,"2015"};
    int year = 0;
    while(year < 3){
        string fin = "";
        for(int i = 1; i < 13 ; i++){
            string mont = "";
            if(i < 10){
                mont += "0";
                mont += ('0' + i);
            }
            else{
               mont += ('0' + i / 10);
               mont += ('0' + i % 10);
            }
            for(int j = 1; j <= month[i - 1]; j++){
                string day = "";
                if(j < 10){
                   day += "0";
                   day += ('0' + j);
                }
                else{
                   day += ('0' + j / 10);
                   day += ('0' + j % 10);
                }
                fin = day + "-" + mont + "-" + years[year];
                int count_fin = count_date(s, fin);
                if(count_fin > ma_re){
                    ma_re = count_fin;
                    re = fin;
                }
            }
        }
        year++;
    }
    cout << re;
}
