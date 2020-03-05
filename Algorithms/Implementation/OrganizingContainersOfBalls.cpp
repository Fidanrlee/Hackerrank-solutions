#include <map>
#include <set>
#include <list>
#include <cmath>
#include <string>
#include <limits>
#include <vector>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
  long int q;
    cin >> q;
    for(long int a0 = 0; a0 < q; a0++){
       long int n;
        cin >> n;
        vector< vector<long int> > M(n,vector<long int>(n));
        vector <long int> se(n,0),su(n,0);
        for(long int i = 0;i < n;i++){
           for(long int j = 0;j < n;j++){
              cin >> M[i][j];
               se[i]=se[i]+M[i][j];
               su[j]=su[j]+M[i][j] ;}
        }
       sort(se.begin(),se.end());
         sort(su.begin(),su.end());
        if(se==su)
            cout<<"Possible"<<endl;
        else
              cout<<"Impossible"<<endl;

    }
    return 0;
}
