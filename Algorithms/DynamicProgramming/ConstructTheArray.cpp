#include <bits/stdc++.h>

using namespace std;
int k,x;
long long arr[100000]={0};

long long countArray(int n) {
  if(n==0)
    return 0;
    else if(n==1)
        return 1;

    if(arr[n]!=0)
        return arr[n];

    long A=0;
    A=((k-1)*countArray(n-2)+(k-2)*countArray(n-1))%1000000007;

    arr[n]=A;
    return A;
}

int main() {
    int n;
    cin >> n >> k >> x;

    long long answer=0;

    if(x!=1)
    answer = countArray(n-1);
    if(x==1)
    answer = (countArray(n-2)*(k-1))%1000000007;

        cout << answer << endl;

    return 0;
}
