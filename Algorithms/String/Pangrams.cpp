#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {

    string s,a="abcdefghkjqlmnoprstyzuvxiw";
    getline(cin,s);
    int n;
    n=s.length();
    int cem=0,i;
    for(int j=0;j<26;j++){
    for(i=0;i<n;i++){
        int t=(s[i]);
        if(t<90){
        t+=32;
        s[i]=(t);}
       if(a[j]==s[i]){
            cem++;
         break;
        }}
    }
    if(cem==26)
    cout<<"pangram"<<endl;
    else
        cout<<"not pangram"<<endl;
    return 0;
}
