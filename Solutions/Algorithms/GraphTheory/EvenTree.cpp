#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int say(vector <vector <int > >& parent,int i,int &result,vector <int >& l ){
int s=1,s1=0;
//cout<<'a'<<endl<<l[i]<<endl;;
if(l[i]==1)
for(int o=0;o<parent[i].size();o++){
    s1=say(parent,parent[i][o],result,l);
    s=s+s1;
}
//cout<<i<<" "<<s<<endl;
if(s%2==0){
     //cout<<i<<endl;
    s=0;
    result++;}
return s;
}

int main()
{
int n,m,o,p ,result=0;
cin>>n>>m;
vector <vector <int > > parent(n+1);
vector <int >l (n+1,0);
for(int i=0;i<m;i++){
        cin>>o>>p;
    parent[p].push_back(o);
    l[p]=1;
    }
    say(parent,1,result,l);


    cout<<result-1;
    return 0;
}
