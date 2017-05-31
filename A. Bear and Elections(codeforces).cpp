#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int ar[n-1];
    int f;
    scanf("%d", &f);
    for(int i = 1;i < n; i++)
        scanf("%d", &ar[i - 1]);
    int h = 0;
    sort(ar,ar + n - 1);
    while(ar[n - 2] >= f){
        f++;
        h++;
        ar[n - 2]--;
        sort(ar,ar + n -1);
   }
   cout << h;
}
