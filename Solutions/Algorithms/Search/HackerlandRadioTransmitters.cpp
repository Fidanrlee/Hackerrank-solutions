#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    vector<int> v(a);

    for(int j=0;j<a;j++){
        cin>>v[j];}

    int cem=0;
    int j,h=0;
    sort(v.begin(),v.end());
    while(v.size()>0 ){
        j=0;
            while(v[j]<=v[0]+b  && j<v.size()){
            j++;}
        if(j==0)
            h=v[j];
        else
            h=v[j-1];
        j=0;
        while(v[j]<=h+b && v.size()!=0){
        v.erase(v.begin()+j);}
        cem++;
    if(h==0 && v.size()<2*b)
    break;}

    cout<<cem<<endl;
    return 0;
}
