#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t){
        int re = 0;
        string s1,s2,s3;
        cin >> s1 >> s2 >>s3;
        map<char,char> mar;
        map<char,int> va;
        mar['A']='0';
        mar['B']='0';
        mar['C']='0';
        mar['D']='0';
        mar['E']='0';
       if(s1.find('A') != -1||s2.find('A') != -1||s3.find('A') != -1)va['A']=1;
       if(s1.find('B') != -1||s2.find('B') != -1||s3.find('B') != -1)va['B']=1;
       if(s1.find('C') != -1||s2.find('C') != -1||s3.find('C') != -1)va['C']=1;
       if(s1.find('D') != -1||s2.find('D') != -1||s3.find('D') != -1)va['D']=1;
       if(s1.find('E') != -1||s2.find('E') != -1||s3.find('E') != -1)va['E']=1;

       if(s1.size() > 1){
          mar[s1[0]] = '1';
       }
       if(s2.size() > 1){
          mar[s2[0]] = '1';
       }

       if(s3.size() > 1){
          mar[s3[0]] = '1';
       }
       string hg = "0123456789";
       for(int y = (mar['A']-'0');y < 10;y++){
           for(int y1 = (mar['B']-'0');y1 < 10;y1++){
               for(int y2 = (mar['C']-'0');y2 < 10;y2++){
                   for(int y3 = (mar['D']-'0');y3 < 10;y3++){
                       for(int y4 = (mar['E']-'0');y4 < 10;y4++){
                           if((y == y1 &&va['A']==1 && va['B']==1)
                                       ||(y == y2 &&va['A']==1 && va['C']==1)
                                       ||(y == y3 &&va['A']==1 && va['D']==1)
                                       ||(y == y4 &&va['A']==1 && va['E']==1)
                                       ||(y1 == y2 &&va['B']==1 && va['C']==1)
                                       ||(y1 == y3 &&va['B']==1 && va['D']==1)
                                       ||(y1 == y4 &&va['B']==1 && va['E']==1)
                                       ||(y2 == y3 &&va['C']==1 && va['D']==1)
                                       ||(y2 == y4 &&va['C']==1 && va['E']==1)
                                       ||(y3 == y4 &&va['D']==1 && va['E']==1)
                                       )continue;
                           cout << y<< " "<<y1<<" "<<y2<<" "<<y3<<" "<<y4<<"\n";
                           string s11,s22,s33;
                           s11 = s1;
                           s22 = s2;
                           s33 = s3;
                           for(int i=0;i < s11.size();i++){
                               if(s11[i]=='A')s11[i] = hg[y];
                               else if(s11[i]=='B')s11[i] = hg[y1];
                               else if(s11[i]=='C')s11[i] = hg[y2];
                               else if(s11[i]=='D')s11[i] = hg[y3];
                               else if(s11[i]=='E')s11[i] = hg[y4];
                           }
                           for(int i=0;i < s22.size();i++){
                               if(s22[i]=='A')s22[i] = hg[y];
                               else if(s22[i]=='B')s22[i] = hg[y1];
                               else if(s22[i]=='C')s22[i] = hg[y2];
                               else if(s22[i]=='D')s22[i] = hg[y3];
                               else if(s22[i]=='E')s22[i] = hg[y4];
                           }
                           for(int i=0;i < s33.size();i++){
                               if(s33[i]=='A')s33[i] = hg[y];
                               else if(s33[i]=='B')s33[i] = hg[y1];
                               else if(s33[i]=='C')s33[i] = hg[y2];
                               else if(s33[i]=='D')s33[i] = hg[y3];
                               else if(s33[i]=='E')s33[i] = hg[y4];
                           }
                           stringstream q1;
                           stringstream q2;
                           stringstream q3;
                           q1 << s11;
                           q2 << s22;
                           q3 << s33;
                           int n1,n2,n3;
                           q1 >> n1;
                           q2 >> n2;
                           q3 >> n3;
                           if(n1 + n2 == n3)re++;
                           if(n1 - n2 == n3)re++;
                           if(n1 * 1.0 / n2 == n3)re++;
                           if(n1 * n2 == n3)re++;
                       }
                   }
               }
           }
       }
       cout << re<<"\n";
       t--;
    }
}
