#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int a,b;
    cin>>a>>b;
    int max=0;
    int x=0;
    for(int i=a;i<=b;i++){
       for(int j=i+1;j<=b;j++){
        x=i^j;
        if(max<x)
        max=x;
       }
    }
    cout<<max;
    return 0;
}
