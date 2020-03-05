#include <iostream>
#include <string>
using namespace std;

int main() {
  string a,b,c;

    cin>>a>>b;
    cout<<a.length()<<" "<<b.length()<<endl;
    string d=a+b;
    cout<<d<<endl;
    c=a[0];
    a[0]=b[0];
   b[0]=c[0];
    cout<<a<<" "<<b;
    return 0;
}

