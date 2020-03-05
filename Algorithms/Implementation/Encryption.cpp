#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   vector<string> v;
    string g;
cin>>g;
v.push_back(g);

int t=sqrt(v[0].size());
if(t*t!=v[0].size())
    t=t+1;
for(int i=0;i<t;i++){
        int j=i;
  while(j<v[0].size()){
        cout<<v[0][j];
j=j+t;
    }
    cout<<" ";
}

    return 0;
}
