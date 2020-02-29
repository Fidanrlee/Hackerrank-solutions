#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
     unsigned long long int a,b;
     cin>>a>>b;

    vector<int>v;
    int h;
    for(int i=0;i<a;i++){
            cin>>h;
    v.push_back(h);}
    vector <int>::iterator s;
    int countt=0;
    sort(v.begin(),v.end());
    for(int i=0;i<a;i++){
   s=find(v.begin()+i,v.end(),v[i]+b);
        if(s !=v.end())
         countt++;
       }

     cout<<countt<<endl;
    return 0;
}
