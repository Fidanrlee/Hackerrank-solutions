#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
string s,a;
    for(int k=0;k<t;k++){
cin>>s;
int cem=0;
int n=s.length();
  for(int i=0;i<n;i++){
  while(s[i]<s[n-1-i] && s[n-1-i]!='a'){
        s[n-1-i]--;
        cem++;}
    }
    cout<<cem<<endl;
}
    return 0;
}
