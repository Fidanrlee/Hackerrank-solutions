#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n, q;
    cin>>n>>q;

      int** arr = new int *[n]();

      for(int i=0;i<n;i++){
              int arraysize;
              cin>>arraysize;
        int* narr = new int [arraysize]();

        for(int j=0;j<arraysize;j++){
                cin>>narr[j];
        }

        arr[i]=narr;


      }

        for(int i=0;i<q;i++){
        int l1,l2;
        cin>>l1>>l2;
        cout<<arr[l1][l2]<<endl;
         }

        for(int i=0;i<n;i++){
        delete[] arr[i];
         }

        delete[] arr;
    return 0;
}

