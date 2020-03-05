#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>
using namespace std;


int main() {
   int t;
   cin>>t;
    int a,b,n;
    for(int ti=0;ti<t;ti++){
        cin>>n;
        cin>>a>>b;
        int cem1=0,cem2=0;
        list <int > l;
        for(int i=0,j=n-2;i<=n-2,j>=0;i++,j--){
        cem1=i*a+j*b+a;
        cem2=i*a+j*b+b;
         l.push_back(cem1);
         l.push_back(cem2);
        }
        l.sort();
        l.unique();
        copy ( l.begin(),l.end(), ostream_iterator<int>(cout," "));
        cout<<endl;
    }
    return 0;
}
