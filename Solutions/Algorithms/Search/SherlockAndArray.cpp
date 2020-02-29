#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
   int t;
   cin>>t;
   for(int i=0;i<t;i++){

    int a;
    cin>>a;
    vector<int> v(a);
  int cem1=0,cem2=0,k=0;
    for(int j=0;j<a;j++){
        cin>>v[j];
    cem2=cem2+v[j];}

    for(int j=0;j<a;j++){
            int d=0;
            cem1=cem1+v[j];

        if(cem2-cem1==cem1-v[j]){
             k=1;
        break;}
        else
           k=0;}
        if(k==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;}
    return 0;
}
