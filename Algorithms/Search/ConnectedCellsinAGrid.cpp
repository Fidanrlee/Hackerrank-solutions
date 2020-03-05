#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int nov (vector< vector <int> > &arr,int i,int j,int n,int m){
    int cem=0;

if(arr[i][j-1]==1){
    cem++;
    arr[i][j-1]=2;
    cem=cem+nov(arr,i,j-1,n,m);}

if(i+1<n)
if(arr[i+1][j-1]==1){
    cem++;
    arr[i+1][j-1]=2;
    cem=cem+nov(arr,i+1,j-1,n,m);}

if(i+1<n)
if(arr[i+1][j]==1){
    cem++;
    arr[i+1][j]=2;
    cem=cem+nov(arr,i+1,j,n,m);}

if(i+1<n && j+1<m)
if(arr[i+1][j+1]==1){
    cem++;
    arr[i+1][j+1]=2;
    cem=cem+nov(arr,i+1,j+1,n,m);}

if(j+1<m)
if(arr[i][j+1]==1){
    cem++;
    arr[i][j+1]=2;
    cem=cem+nov(arr,i,j+1,n,m);}
    
    
if(j+1<m && i-1>=0)
if(arr[i-1][j+1]==1){
    cem++;
    arr[i-1][j+1]=2;
    cem=cem+nov(arr,i-1,j+1,n,m);}
    
if(i-1>=0)
if(arr[i-1][j]==1){
    cem++;
    arr[i-1][j]=2;
    cem=cem+nov(arr,i-1,j,n,m);}

return cem;}


int main(){
    int n,m;
    cin>>n>>m;
  vector< vector <int> >  arr(n,vector <int> (m));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            cin>>arr[i][j];}
    int max=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
                int cem=0;
           if(arr[i][j]==1){
                cem=1;
               arr[i][j]=2;
             cem =cem+nov(arr,i,j,n,m);}

        if(cem>max)
        max=cem;}

    cout<<max;

    return 0;}
