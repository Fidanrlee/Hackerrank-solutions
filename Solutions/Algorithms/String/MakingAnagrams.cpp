#include <iostream>
#include <string>
using namespace std; ;
int main(){
string s1,s2;
    int cem=0;
        cin>>s1>>s2;
        int n1=s1.length();
      int n2=s2.length();

  for(int i=0;i<n1;i++)
      for(int j=0;j<n2;j++)
     if(s1[i]==s2[j] && s1[i]!=0){
         cem++;
        s2[j]='*';
      break;
     }
          cout<<n1+n2-2*cem<<endl;

    return 0;
}
