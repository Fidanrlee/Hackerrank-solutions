#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;
int main() {
         int t,a;
    cin>>t;
    vector <int> v1;
    for(int i=0;i<t;i++){
        cin>>a;
        v1.push_back(a);
        }
    int  b,c,d;
   cin>>b>>c>>d;
    
  v1.erase(v1.begin()+b-1);
  v1.erase(v1.begin()+c-1,v1.begin()+d-1);        
    cout<<v1.size()<<endl;
    copy(v1.begin(),v1.end(),ostream_iterator<int>(cout," "));
    return 0;
} 
