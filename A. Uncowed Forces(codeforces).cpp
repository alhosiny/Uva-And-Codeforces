#include<bits/stdc++.h>
using namespace std;
int main(){
    double ar[5];
    double re = 0;
    for(int i = 0; i < 5; i++)
        cin >> ar[i];
    double x = 500;
    for(int i = 0; i < 5; i++){
        double w;
        cin >> w;
        double all = (1.0 - ar[i] / 250.0) * x - 50 * w;
        double ax = 0.3 * x;
        re += max(ax, all);
        x += 500;
    }
    int h, h1;
    cin >> h >> h1;
    re += (100 * h);
    re -= (50 * h1);
    cout << re;
}
