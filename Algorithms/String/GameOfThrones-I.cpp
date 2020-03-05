#include <iostream>
#include <string>
using namespace std;
int a[32];
int main(){
    string s1;
    int cem=0;
        cin>>s1;
        int n1=s1.length();
      for(int i=0;i<n1;i++){
          int t=(s1[i]);
          a[t-97]++;
          }
     for(int i=0;i<32;i++){
       cem=cem+a[i]%2;
   }

         if(cem<=1)
            cout<<"YES";
            else
            cout<<"NO";

    return 0;
}
