#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
         int t,d,a;
    cin>>t;
    vector <long long int> v1;
    for(int i=0;i<t;i++){
        cin>>a;
        v1.push_back(a);
        }
   cin>>d;
     vector <long long int> v2;
     for(int i=0;i<d;i++){
        cin>>a;
        v2.push_back(a);
        }

    for(int i=0;i<t;i++)
        for(int j=0;j<d;j++)
            if(v1[i]==v2[j]){
                v2.erase(v2.begin()+j);
                break;
            }
    sort(v2.begin(),v2.end()) ;

 for(int i=0;i<v2.size();i++)
     for(int j=0;j<v2.size();j++)
         if(v2[i]==v2[j] && i!=j)
                v2.erase(v2.begin()+j);



       for(int i=0;i<v2.size();i++)
     if(v2[i]!=0  )#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
         int t,d,a;
    cin>>t;
    vector <long long int> v1;
    for(int i=0;i<t;i++){
        cin>>a;
        v1.push_back(a);
        }
   cin>>d;
     vector <long long int> v2;
     for(int i=0;i<d;i++){
        cin>>a;
        v2.push_back(a);
        }

    for(int i=0;i<t;i++)
        for(int j=0;j<d;j++)
            if(v1[i]==v2[j]){
                v2.erase(v2.begin()+j);
                break;
            }
    sort(v2.begin(),v2.end()) ;

 for(int i=0;i<v2.size();i++)
     for(int j=0;j<v2.size();j++)
         if(v2[i]==v2[j] && i!=j)
                v2.erase(v2.begin()+j);



       for(int i=0;i<v2.size();i++)
     if(v2[i]!=0  )
       cout<<v2[i]<<" ";




    return 0;
}

       cout<<v2[i]<<" ";




    return 0;
}
