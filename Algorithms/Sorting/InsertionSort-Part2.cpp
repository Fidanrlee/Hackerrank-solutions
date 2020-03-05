#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
     int t;
    cin>>t;
    int arr[t];

    for(int i=0;i<t;i++)
        cin>>arr[i];
    int n,j;
     for(int i=1;i<t;i++){
        n=arr[i];
         for(j=i;j>=0;j--)
         if(n<arr[j]){
              arr[j+1]=arr[j];
             arr[j]=n;
         }
        for(int i=0;i<t;i++)
        cout<<arr[i]<<" ";
             cout<<endl;
            }


    return 0;
}
