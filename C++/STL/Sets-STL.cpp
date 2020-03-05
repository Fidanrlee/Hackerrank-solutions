#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
   int t;
    cin>>t;
    set<int> s;
    for(int i=0;i<t;i++){

        int a,b;
        cin>>a>>b;
        if(a==1){
            s.insert(b);
        }
        if(a==2){
            s.erase(b);
        }

           if(a==3){
           if(s.find(b)!=s.end())
               cout<<"Yes\n";
               else
                   cout<<"No\n";
        }
    }
    return 0;
}



