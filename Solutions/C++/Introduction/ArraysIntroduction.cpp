#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int b,a[1000],i,j;
    cin>>b;
    
    for(i=0;i<b;i++)
        cin>>a[i];
    
    for(j=1;j<=b;j++)
        cout<<a[b-j]<<" ";
    return 0;
}
