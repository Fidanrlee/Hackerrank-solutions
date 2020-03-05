#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;

    vector <int> scores(n);
    vector < pair <int,int> > arr;

    int j=1;
    cin>>scores[0];
     arr.push_back(make_pair(1,scores[0]));

    for(int i=1;i<n;i++){
       cin >> scores[i];
        if(scores[i]!=scores[i-1]){
           j++;
          arr.push_back(make_pair(j,scores[i]));}
        else
        arr.push_back(make_pair(j,scores[i]));}

    int m;
    cin >> m;
    vector<int> alice(m);


    for(int alice_i = 0;alice_i < m;alice_i++)
       cin >> alice[alice_i];
int k=0,f=n-1;
    for(int i=0;i<m;i++){
            k=0;
        for (j=f;j>=0;j--){
                if(alice[i]<arr[j].second){
                  k=0;
                    break;}
                    else k=1;
        }
        f=j+1;
        if(k==0)
        cout<<arr[j].first+1<<endl;
        else
            cout<<"1"<<endl;
    }

    // your code goes here
    return 0;
}
