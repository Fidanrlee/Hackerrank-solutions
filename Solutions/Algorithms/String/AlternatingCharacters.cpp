#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){

        string s;
        cin>>s;
        int k=0;
        for(int j=0;j<s.length();j++)
                if(s[j]==s[j+1])
                    k++;


        cout<<k<<endl;
    }
    return 0;
}
