#include <iostream>
#include <deque>
#include <algorithm>
#include <iterator>
using namespace std;

void printKMax(int arr[], int n, int k){
    std::deque<int> d(k);

    for(int i=0;i<n;i++){
        while(!d.empty() && arr[i]>=arr[d.back()]){//3 4 5 8 1 4 10
            d.pop_back();
        }


        while(!d.empty() && d.front()<=i-k){
            d.pop_front();
        }

        d.push_back(i);
        if(i>=k-1){
            cout<<arr[d.front()]<<" ";
        }
}
cout<<endl;
}

int main(){

    int t;
    cin >> t;
    while(t>0) {
        int n,k;
        cin >> n >> k;
        int i;
        int arr[n];
        for(i=0;i<n;i++)
              cin >> arr[i];
        printKMax(arr, n, k);
        t--;
      }
      return 0;
}

