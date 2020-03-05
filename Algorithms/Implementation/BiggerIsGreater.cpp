#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;
int main() {
   int t;
   cin>>t;
    vector<string> vs(t);
    for(int i=0;i<t;i++)
        cin>>vs[i];
int k,j,l;
    for(int i=0;i<t;i++){
            l=2;
        for(j=vs[i].size()-2;j>=0;j--){
            k=vs[i].size()-1;
            while(k>j){
                if(vs[i][j]<vs[i][k]){
                    swap(vs[i][j],vs[i][k]);
                l=-2;
                break;}
                k--;}
                if(l<0)
                    break;}
                if(l<0){
                sort(vs[i].begin()+j+1,vs[i].end());
            copy(vs[i].begin(),vs[i].end(),ostream_iterator<char>(cout));}
            else
                cout<<"no answer";
            cout<<endl;

    }
    return 0;
}
