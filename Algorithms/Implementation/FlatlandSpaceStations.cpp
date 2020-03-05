#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> c(m);
    int max=0;
    for(int c_i = 0;c_i < m;c_i++)
       cin >> c[c_i];
       
    
    sort(c.begin(),c.end());
    
    max=c[0]-0;
    if(max<n-1-c[m-1])
        max=n-1-c[m-1];
    
       for(int c_i = 0;c_i < m;c_i++)
           if(c_i>=1)
            if((c[c_i]-c[c_i-1])/2>max)
                max=(c[c_i]-c[c_i-1])/2;
        
 
    cout<<max;
  
    
    return 0;
}
