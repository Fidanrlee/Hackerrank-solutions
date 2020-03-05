#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
   int cp,n;
   int a;
    cin>>cp>>n;
    int pg=1;
    int cem=0;
    for(int i=0;i<cp;i++){
        cin>>a;
        int f=1;
        while(f<=a){
            int k=f+n-1;
              if(f+n-1>a)
                  k=a;
            if(f<=pg && k>=pg)
                cem++;
            f+=n;
            pg++;}
    }
    cout<<cem;
    return 0;
}