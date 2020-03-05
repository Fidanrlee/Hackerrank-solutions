#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[8]={0};
    int arr1[8][8]={{4,9,2,3,7,8,1,6},
                    {2,9,4,7,3,6,1,8},
                    {8,1,6,3,7,4,9,2},
                    {6,1,8,7,3,2,9,4},
                    {8,3,4,1,9,6,7,2},
                    {4,3,8,9,1,2,7,6},
                    {6,7,2,1,9,8,3,4},
                    {2,7,6,9,1,4,3,8}
                    };
    int i=0;
    vector< vector<int> > s(3,vector<int>(3));
    for(int s_i = 0;s_i < 3;s_i++)
       for(int s_j = 0;s_j < 3;s_j++){
          cin >> s[s_i][s_j];
            if(s_i!=1   ||  s_j!= 1){
                arr[i]=s[s_i][s_j];
                i++;
            }}

    int cem=0;
    if(s[1][1]!=5){
        cem=s[1][1]-5;
        s[1][1]=5;
    }
        if(cem<0)
            cem=cem*(-1);

    int cem1=0;
    int minn=100;

        for(i=0;i<8;i++){

            cem1=0;
             for(int j=0;j<8;j++){
              if(arr[j]>arr1[i][j])
                  cem1=cem1+arr[j]-arr1[i][j];
              else
                   cem1=cem1+arr1[i][j]-arr[j];
              }

            if(minn>cem1)
                minn=cem1;
        }



   cout<<cem+minn<<endl;

    return 0;
}
