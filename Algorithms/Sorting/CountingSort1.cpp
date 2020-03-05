#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int t;
    cin>>t;
    int v;
int arr[100]={0};
    for(int i=0;i<t;i++){
        cin>>v;
        arr[v]++;
    }

 for(int i=0;i<100;i++){
         cout<<arr[i]<<" ";
            }


    return 0;
}
