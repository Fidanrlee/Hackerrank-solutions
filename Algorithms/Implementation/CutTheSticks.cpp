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
 int a;
 vector<int> v;
       for(int i=0;i<t;i++){
            cin>>a;
        v.push_back(a);}

        while(v.size()!=0){
           int min=100;

           for(int j=0;j<v.size();j++)
           if(min>v[j])
            min=v[j];

            cout<<v.size()<<endl;

           for(int j=0;j<v.size();j++){
            if(v[j]>=min)
           v[j]-=min;
           if(v[j]==0){
            v.erase(v.begin()+j);
             j--;}

             }}


    return 0;
}
