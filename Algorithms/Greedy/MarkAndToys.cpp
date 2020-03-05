#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int t,d,a;
    cin>>t>>d;
    int arr[t];
    int cem=0;
    int c=0;
    for(int i=0;i<t;i++){
        cin>>arr[i];}
    sort(arr,arr+t);
       for(int i=0;i<t;i++){
        if(cem+arr[i]<=d){
            cem=cem+arr[i];
            c++;}
  }

    cout<<c;
    return 0;
}
