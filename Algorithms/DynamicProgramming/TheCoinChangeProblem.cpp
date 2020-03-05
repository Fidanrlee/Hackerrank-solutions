#include <bits/stdc++.h>

using namespace std;
long q[251][251];

long getWays(long n, vector < long > c,long m){
    
     if (n == 0)
        return 1;
    
    if (n < 0)
        return 0;
 
    if (m <=0 && n >= 1)
        return 0;
    if(q[n][m]!=0) return q[n][m];
    
    q[n][m]=getWays(n,c,m-1)+getWays(n-c[m-1],c,m);
    return q[n][m];
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<long> c(m);
    for(int c_i = 0; c_i < m; c_i++){
       cin >> c[c_i];
    }
    // Print the number of ways of making change for 'n' units using coins having the values given by 'c'
    long ways = getWays(n, c,m);
    cout<<ways;
    return 0;
}
