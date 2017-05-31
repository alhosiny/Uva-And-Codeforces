#include<bits/stdc++.h>
using namespace std;
map<string,int> fr;
int main(){
    string wor,best;
    int Max = 0;
    while(cin >> wor){
         if(wor == "#"){
            if(Max)
                cout <<setw(4)<< Max<<" "<<best<<"\n";
            Max = 0 ;
            fr.clear();
         }else{
            string wori="";
            for(int i =0;i < wor.size();i++){
                if(wor[i] >= 'a' && wor[i] <= 'z'){
                    wori += wor[i];
                }else if(wor[i] >= 'A' && wor[i] <= 'Z'){
                    wori += (char)(wor[i] - 'A' + 'a');
                }else{
                    if(wori.size()){
                        fr[wori]++;
                        if(Max < fr[wori]){
                            Max = fr[wori];
                            best = wori;
                        }
                    }
                    wori = "";
                }
            }
            if(wori.size()){
                fr[wori]++;
                if(Max < fr[wori]){
                    Max = fr[wori];
                    best = wori;
                }
            }
        }
    }
}
