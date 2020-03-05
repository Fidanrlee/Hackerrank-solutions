#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
string s;
    for(int k=0;k<t;k++){
        cin>>s;
        int cem=-1;
        int n=s.length();
  for(int i=0;i<n/2;i++)
     if(s[i]!=s[n-1-i] ){
            if(s[i+1]==s[n-1-i] && s[i+2]==s[n-1-1-i])
         cem=i;
        else
             cem=n-1-i;
         break;}
          cout<<cem<<endl;
        }

    return 0;
}
