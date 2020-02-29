#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;

    for(int i=0;i<s.size();i++)
        if(s[i]<='z' && s[i]>='a'){
                int t=(s[i]);
                t=t+k%26;
                if(t>122)
                s[i]=s[i]-26;
                s[i]=s[i]+k%26;
        }
        else if(s[i]<='Z' && s[i]>='A'){
                s[i]=s[i]+k%26;
            if(s[i]>'Z')
                s[i]=s[i]-26;
        }

    cout<<s;


    return 0;
}
