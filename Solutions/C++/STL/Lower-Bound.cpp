#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;


int main() {
         int t,d,a;
    cin>>t;
    vector <int> v1;
    for(int i=0;i<t;i++){
        cin>>a;
        v1.push_back(a);
        }
   cin>>d;
     vector <int> v2;
     for(int i=0;i<d;i++){
        cin>>a;
        v2.push_back(a);
        }
    int k=0;

 for(int i=0;i<d;i++){
       vector<int>::iterator low = lower_bound(v1.begin(), v1.end(), v2[i]);
       if (v1[low - v1.begin()] == v2[i])
           cout << "Yes " << (low - v1.begin()+1) << endl;
       else
           cout << "No " << (low - v1.begin()+1) << endl;
     }


    return 0;
}
