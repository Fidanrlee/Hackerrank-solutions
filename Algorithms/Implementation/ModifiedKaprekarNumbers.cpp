#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  long int a,b,e=0;
    cin>>a>>b;
    for(long int i=a;i<=b;i++){
       long int t=i*i,c=0;
        while(t!=0){
            t=t/10;
        c++;}
        t=i*i;
      long  int r=0,d,l=i*i;
        if(c%2==0)
            c=c/2;
        else
           c=c/2+1;
           // cout<<c<<endl;
         long   int u=pow(10.0,c);
            // cout<<u<<endl;
        while(c!=0){
            l=l/10;
            c--;}

            r=t%u;
           // cout<<t<<l<<" ";
           // cout<<l<<r<<" ";
        if(r+l==i){
         cout<<i<<" ";
        e++;
        }
       }
    if (e==0)
        cout<<"INVALID RANGE";
    return 0;
}
