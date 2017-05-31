#include<bits/stdc++.h>
using namespace std;
int main(){
    string l;
    cin >> l;
    while(l != "*"){
        int ar[(int)l.size()];
        for(int i = 0; i < l.size(); i++){
            if(l[i]-'a' <= 13){
              ar[i] = (l[i]-'a');
            }
            else{
              ar[i] = -1*(26-((l[i]-'a')));
            }
        }
        bool t = 1;
        int num = ar[0];
        if(num < 0) t = 0;
        long long re = abs(num);
        num = abs(num);
        for(int y = 1;y < l.size();y++){
            bool f = ar[y] >= 0;
            if(t){
               if(f){
                     if(num >= ar[y]){
                        num = ar[y];
                     }
                     else{
                        re += ar[y] - num;
                        num = ar[y];
                     }

                }else{
                    if(l[y]-'a'-num <= abs(ar[y])){
                        if(num >= l[y]-'a'){
                            num = l[y]-'a';
                        }else{
                            re += l[y]-'a'- num;
                            num = l[y]-'a';
                        }
                    }else{
                        re += abs(ar[y]);
                        t = 0;
                        num = abs(ar[y]);
                    }
                }
            }else{
                if(f){
                    if(ar[y] < 26-(l[y]-'a')-num){
                        t = 1;
                        re +=  ar[y];
                        num = ar[y];
                    }else{
                         if(num >= 26-(l[y]-'a')){
                             num = 26-(l[y]-'a');
                         }else{
                               re +=  26-(l[y]-'a')-num;
                               num = 26-(l[y]-'a');
                         }
                    }
                }else{
                    if(num >= abs(ar[y])){
                    //cout << l[y]<<"\n";
                    //cout << re<<"\n";
                      num = abs(ar[y]);
                    }else{
                      re += abs(ar[y]) - num;
                      num = abs(ar[y]);
                    }
                }
            }
        }

        cout << re;
        cin >> l;
        if(l != "*")cout <<"\n";
    }
    return 0;
}



