#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;





int main() {

    int n;
    cin>>n;
    map <string,int> M;
    for (int i=0;i<n;i++){

     int a,marks;
        string s;
        cin>>a>>s;
        if(a==1){
           cin >>marks;
            M[s]+=marks;
        }
        if(a==2)    M.erase(s);

        if(a==3){
                cout<<M[s]<<endl;

        }
    }
    return 0;
}



