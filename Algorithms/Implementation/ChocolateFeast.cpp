#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        int cem=0;
        int co=n/c;
        cem=cem+co;
        
        while(co-m>=0){
            co=co-m;
            cem++;
            co=co+1;}
        cout<<cem<<endl;
    }
    
    
    
    
    return 0;
}
