#include <iostream>
#include <string>
using namespace std;
int a[26],ar[26];
int main(){
    string s1,s2;
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
            for(int i=0;i<26;i++){
             a[i]=ar[i]=0;
            }
    int cem=0;
        cin>>s1>>s2;
     int n1=s1.length();
     int n2=s2.length();
      for(int i=0;i<n1;i++){
           int t=(s1[i]);
          a[t-97]=1;}
      for(int j=0;j<n2;j++){
          int t=(s2[j]);
          ar[t-97]=1;}
        for(int j=0;j<26;j++){
          if(a[j]+ar[j]==2){

         cout<<"YES"<<endl;
              cem=1;
          break;}
          else {
              cem=0;}}
          if(cem==0)
          cout<<"NO"<<endl;
    }
    return 0;
}
