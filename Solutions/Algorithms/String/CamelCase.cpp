#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin>>s;
    int n;
    n=s.length();
    int cem=0;
    for(int i=0;i<n;i++){
        if(s[i]>=65 && s[i]<=90)
        cem++;
    }
    cout<<cem+1;
    return 0;
}
