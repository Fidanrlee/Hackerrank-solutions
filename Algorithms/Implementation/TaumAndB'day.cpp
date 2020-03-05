#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        unsigned long long int a,b;
        cin>>a>>b;
        unsigned long long int x,y,z;
        cin>>x>>y>>z;
        unsigned long long int cem=0;
        if(x<=y+z)
            cem=cem+a*x;
        else
            cem=cem+a*(y+z);
        
         if(y<=x+z)
            cem=cem+b*y;
        else
            cem=cem+b*(x+z);
        cout<<cem<<endl;
        
    }
    return 0;
}
