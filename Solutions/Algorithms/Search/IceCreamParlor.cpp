#include <iostream>
#include <deque>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;
int main(){

   int t;
   cin >> t;
   while(t>0) {
      int n,k;
       cin >> n >> k;
      vector<int> v(k);

       for(int i=0;i<v.size();i++)
        cin>>v[i];

       int i,j,c=0;
       for(i=0;i<v.size();i++){
       for(j=i+1;j<v.size();j++)
        if(n==v[i]+v[j]){
           c=1;
           cout<<i+1<<" "<<j+1<<endl;
             break;}
            if(c==1)
            break;
           }

       t--;}
     return 0;
}
