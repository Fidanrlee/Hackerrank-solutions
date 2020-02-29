#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

 unsigned long long int quvvet( unsigned long long int f){
  unsigned long long int t=0;
   //cout<<t<<" "<<sqrt(f)<<endl;
    while(f!=pow(2,t)){
        t++;
        if(f<pow(2,t)){
            t--;
        break;}
            }
        return t;}

int main() {
 unsigned long long int t;
    cin>>t;
    for(int i=0;i<t;i++){
      unsigned long long  int f,n,c=0;
        cin>>f;
     //  cout<<t<<" "<<sqrt(f)<<endl;;
        while(f>1){
          n=quvvet(f);
       // cout<<n<<" ";
            if(f==pow(2,n)){
                f=1;
                c=c+n;
                break;}
            else{
                f=f-pow(2,n);
                c++;}
        }
            if(c%2!=0)
           cout<<"Louise"<<endl;
           else
            cout<<"Richard"<<endl;
    }

    return 0;
}
