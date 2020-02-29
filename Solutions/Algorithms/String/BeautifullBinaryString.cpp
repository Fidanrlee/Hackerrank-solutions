#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t,cem=0;;
    cin>>t;
        string s;
        cin>>s;
        for(int j=0;j<t-2;j++){
        if(s[j]=='0' && s[j+1]=='1' && s[j+2]=='0'){
           cem++;
        j=j+2;}
        }
        cout<<cem;

    return 0;
}
