#include<bits/stdc++.h>
using namespace std;
char ar[8][8];
int main()
{
    int a = 0, b = 0;
    bool wi = 0;
    bool bl = 0;
    for(int i = 0; i < 8; i++){
        string x;
        cin >> x;
        for(int j = 0; j < x.size(); j++){
            ar[i][j] = x[j];
        }
    }
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++){
            if(!wi && ar[i][j] == 'W'){
                bool tr = 1;
                for(int ii = i - 1; ii >= 0; ii--)
                    if(ar[ii][j] != '.')
                        tr = 0;
                if(tr){
                    wi = 1;
                    a = i;
                }
            }
            else if(ar[i][j] == 'B'){
                bool tr = 1;
                for(int ii = i + 1; ii < 8; ii++)
                    if(ar[ii][j] != '.')
                        tr = 0;
                if(tr){
                    b = 7 - i;
                }
            }
        }

    if(a <= b)
        cout <<"A";
    else
        cout << "B";
}
