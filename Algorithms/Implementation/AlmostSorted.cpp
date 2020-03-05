#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;
int main() {
   int t;
   cin>>t;
    vector<int> v(t);
    cin>>v[0];
    int r=0,m=0,n=0;
    for(int i=1;i<t;i++){
         cin>>v[i];
        if(v[i-1]>v[i]){
             r++;
            m=i;
            if(r==1)
                n=i-1;}
           }
    if(r==0){
           cout<<"yes";
           return 0;}
 int tem;
    vector<int> ar(t),a(t);
    ar=a=v;
sort(ar.begin(),ar.end());
int i,j;
 if(r<=2){tem=0;
        for(i=n;i<m;i++){
            for(j=i+1;j<=m;j++)
            if(v[i]>v[j]){
                swap(v[i],v[j]);
                if(v==ar){
                     tem=1;
                break;}
                else
                    swap(v[i],v[j]);}
            if(tem==1)
                break;}
          if(tem==1){
             cout<<"yes"<<endl;
             cout<<"swap"<<" "<<i+1<<" "<<j+1;
             return 0;}}
    else{
            reverse(v.begin()+n,v.begin()+m+1);
                    if(v==ar){
                cout<<"yes"<<endl;
                cout<<"reverse"<<" "<<n+1<<" "<<m+1<<endl;
            return 0;}}

    cout<<"no";
    return 0;
}
