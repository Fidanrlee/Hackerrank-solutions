#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n;
    cin>>t>>n;

    int arr[t],arr0[t];
    for(int i=0;i<t;i++)
        cin>>arr[i];

    int f=0;
    for(int i=n;i<t+n;i++){
        if(i<t)
        arr0[f]=arr[i];
            else
            arr0[f]=arr[i-t];
        f++;
        }

     for(int i=0;i<t;i++)
        cout<<arr0[i]<<" ";


    return 0;
}
