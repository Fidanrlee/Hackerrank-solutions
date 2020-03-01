#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    int n1,n2,d;
    cin>>n1;
    string a[1000],b[1000];
    for(int i=0;i<n1;i++)
    cin>>a[i];
  
    cin>>n2;
    for(int i=0;i<n2;i++)
    cin>>b[i];
   
    for(int i=0;i<n2;i++) {
      d=0;  
    for(int j=0;j<n1;j++)
        if( b[i]==a[j]){
        d++;}
        cout<<d<<endl;
        }
        
    return 0;
}
