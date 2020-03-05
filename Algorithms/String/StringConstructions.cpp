#include <iostream>
#include <string>
using namespace std;
int main(){
    int m,c;
    cin>>m;
     string s;
    for(int j=0;j<m;j++){
        cin>>s;
        c=0;
        int n=s.length();
        for(int i=97;i<=122;i++)
            for(int k=0;k<n;k++)
              if(s[k]==i){
                  c++;
              break;
              }
         cout<<c<<endl;
    }

    return 0;
}
