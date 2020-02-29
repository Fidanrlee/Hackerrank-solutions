#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     int t,d;
    cin>>t>>d;
    int arr[d];

    for(int i=0;i<d;i++)
        cin>>arr[i];

     for(int i=0;i<d;i++)
            if(arr[i]==t){
                 cout<<i<<endl;
                break;
            }


    return 0;
}
