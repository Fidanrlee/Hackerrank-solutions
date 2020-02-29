#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>
using namespace std;

int main() {
    list <int> left,right;
    int a,t;
    cin>>t;
    int first;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        if(i==0)
            first=a;
        if(a<first)
        left.push_back(a);
        else if(a>first)
            right.push_back(a);}
    copy(left.begin(),left.end(),ostream_iterator<int>(cout," "));
    cout<<first<<" ";
     copy(right.begin(),right.end(),ostream_iterator<int>(cout," "));



    return 0;
}
