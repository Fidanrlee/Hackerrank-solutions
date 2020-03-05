#include <iostream>
#include <string>
using namespace std;
 int a[26], arr[5];
int main(){
     string s;
    int cem=0;
     cin>>s;
     int n=s.length();
        for(int i=0;i<n;i++){
              int t=(s[i]);
            a[t-97]++;
        }
    int j=0;
    for(int i=0;i<25;i++){
            while(a[j]==0)
            j++;
        if(a[j]!=a[i] && a[i]!=0)
          cem++;
   // cout<<a[i]<<cem<<endl;
    }

    if(cem<=1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
