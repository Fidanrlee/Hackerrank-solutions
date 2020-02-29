#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s,a="hackerrank";
    int n,t,i,j,k;
    cin>>t;
    for(k=0;k<t;k++){
        cin>>s;
        n=s.length();
    j=0;
    for(i=0;i<n;i++)
       if(a[j]==s[i]){
           j++;
       }
    if(j==10)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }

    return 0;
}
