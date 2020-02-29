#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int t;
    cin>>t;
    vector <int> v(t),n;
    
    for(int i=0;i<t;i++)
        cin>>v[i];
    
    
    sort(v.begin(),v.end());
   int min=200000;
     for(int i=0;i<t-1;i++)
          if(min>=v[i+1]-v[i] ){
                 min=v[i+1]-v[i];
              n.push_back(v[i]);
              n.push_back(v[i+1]);
          }
      
     for(int i=0;i<n.size();i+=2)
          if(min==n[i+1]-n[i]){
         cout<<n[i]<<" "<<n[i+1]<<" ";}
      
         
        return 0;
}
