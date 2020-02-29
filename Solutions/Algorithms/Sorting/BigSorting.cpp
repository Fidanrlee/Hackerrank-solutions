#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
bool func(string i,string j){
    int n=i.size();
    int m=j.size();
  if(n==m)
    return j>i;
    else
return m>n;
}
int main()
{
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end(),func);

    copy(v.begin(),v.end(),ostream_iterator<string>(cout,"\n"));

    return 0;
}
