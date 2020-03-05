#include <bits/stdc++.h>
using namespace std;

long long candies(int n, vector<int> arr){

    int cem[n];

    for (int i=0;i<n;i++){
        cem[i]=1;
        if(arr[i]>arr[i-1] && i-1>=0)
            cem[i]=cem[i-1]+1;
            }

     for (int i=n-1;i>=0;i--){
        if(arr[i]>arr[i+1] && i+1<n &&  cem[i]< cem[i+1]+1)

            cem[i]=cem[i+1]+1;
            }

    long long ans=0;
    for(int i=0;i<n;i++){
         // cout<<cem[i]<<" ";
         ans+=cem[i];
    }

    return ans;
}

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        arr[i] = arr_item;
    }

    long long result = candies(n, arr);
    cout << result << "\n";
    return 0;
}
