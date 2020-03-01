#include <iostream>
using namespace std;
int main(){
   int a1[6][6];
    for(int i=0;i<6;i++)
    for(int j=0;j<6;j++)
cin>>a1[i][j];
        
int cem,max;
max=-90;
    for(int d=0;d<=3;d++)
    for(int n=0;n<=3;n++){
    cem=0;
    for(int i=n;i<n+3;i++)
    for(int j=d;j<d+3;j++){
        if(i==n+1 && (j==d || j==d+2))
          cem=cem+0;
        else
        cem=cem+a1[i][j];}
    if(max<cem)
        max=cem;
    }
    cout<<max;
    return 0;
}