#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;


int main() {
    int t;
    cin>>t;
    vector <int> v;
int a;
    for(int i=0;i<t;i++){
        cin>>a;
        v.push_back(a);
    }
sort(v.begin(),v.end());
    copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));


    return 0;
}
