#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s,a="SOS";
    cin>>s;
    int n;
    n=s.length();
    int cem=0;
    int c=0;
    for(int i=0;i<n;i++){
         c=c%3;
       if(s[i]!=a[c])
       cem++;
       c++;

    }
    cout<<cem;
    return 0;
}
