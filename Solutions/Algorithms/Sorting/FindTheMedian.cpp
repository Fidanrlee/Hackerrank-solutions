#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int t;
    cin>>t;
    vector <int> v(t);

    for(int i=0;i<t;i++)
        cin>>v[i];

    sort(v.begin(),v.end());

      cout<<v[t/2];

        return 0;
}
