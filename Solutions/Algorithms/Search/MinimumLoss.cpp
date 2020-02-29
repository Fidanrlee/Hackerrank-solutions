#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
bool compare (pair <long long,long long> &i,pair <long long,long long> &j){
return i.second<j.second;
}

int main() {
   long long n,c,i,min=10000000000000000;

    cin>>n;
    vector <pair <long long ,long long > > v(n);
    for(i=0;i<n;i++)
        {
        cin>>c;
        v[i]=make_pair(i,c);
        }

        sort(v.begin(),v.end(),compare);
        for(i=1;i<n;i++)
            if(v[i].second-v[i-1].second>0 && v[i].first<v[i-1].first && v[i].second-v[i-1].second<min)
            min=v[i].second-v[i-1].second;

            cout<<min<<endl;

    return 0;
}
