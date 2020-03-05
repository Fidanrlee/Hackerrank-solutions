#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
          int Q;
    cin >> Q;
    for(int a0 = 0; a0 < Q; a0++){
        int n;
        cin >> n;
        string b;
        cin >> b;
        int cem1=0,cem2=0;
        int arr[26]={0};
        for(int i=0;i<b.size();i++){
            if(b[i]=='_')
                cem1++;
            if(b[i]!='_' && b[i-1]!=b[i] && b[i+1]!=b[i])
                cem2++;
            if(b[i]!='_')
                arr[b[i]-65]++;}

        int k=0;
        for(int i=0;i<26;i++)
            if(arr[i]==1){
                k=1;
                break;}

        if(k==1)
            cout<<"NO"<<endl;
        else if(cem1==0 && cem2!=0)
            cout<<"NO"<<endl;
        else if(cem1>=1)
            cout<<"YES"<<endl;
        else if(cem2==0 && cem1==0)
            cout<<"YES"<<endl;}

    return 0;
}
