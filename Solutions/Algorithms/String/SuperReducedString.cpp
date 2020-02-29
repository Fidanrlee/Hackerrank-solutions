#include <string>
#include <iostream>
using namespace std;
int main() {
   string a;
    cin>>a;
    int n=a.length();
    int k;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k=j+1;
            while(a[k]==0){
                k+=2;}
           if(a[j]==a[k])
           a[j]=a[k]=0;
        }
    }
    k=0;
    for(int i=0;i<n;i++)
      if(a[i]!=0){
      cout<<a[i];
      k=1;
      }
    if(k==0)
        cout<<"Empty String";
    return 0;
}
