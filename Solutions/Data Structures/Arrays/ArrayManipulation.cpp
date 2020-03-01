#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int n,m,a,b,k;
    cin>>n>>m;
    long int *arr=new long int[n+1]();
    long max=0;

    for(long i=0;i<m;i++){
        cin>>a>>b>>k;
        arr[a]+=k;
       
        if(b+1<=n) arr[b+1]-=k;
       }
 long sum=0;
    for(long i=1;i<=n;i++){
       
        sum+=arr[i];
        if(max<sum)
        max=sum;
       }
    cout<<max;
    return 0;
}
