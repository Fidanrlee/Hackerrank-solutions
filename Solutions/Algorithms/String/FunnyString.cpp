#include <bits/stdc++.h>

using namespace std;

string funnyString(string s){
   int n=s.size();
   string b;
    for(int i=0;i<s.size()/2;i++){
            int a1=s[i+1]-s[i];
            int a2=s[n-1-i]-s[n-2-i];
    if(a1<0)
        a1=-1*a1;
    if(a2<0)
        a2=-1*a2;
        if(a1==a2)
        b="Funny";
        else{
            b="Not Funny";
            break;}
    }

    return b;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        string result = funnyString(s);
        cout << result << endl;
    }
    return 0;
}
