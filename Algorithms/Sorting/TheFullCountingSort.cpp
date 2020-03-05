#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int main() {
  int n,i,j;
    cin>>n;
    int a;
   string b; 
    string s[n];
        for(i=0;i<n/2;i++){
            cin>>a;
            cin>>b;
            s[a]=s[a]+"-"+" ";
        }
     for(i=n/2;i<n;i++){
            cin>>a;
            cin>>b;
            s[a]=s[a]+b+" ";
        }
   
     for(int i=0;i<n;i++){
         cout<<s[i];
     }

    return 0;
}
