#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;

    vector <pair <int ,int> > arr;
     int j=0;
    int k=0;
        for(int i=0;i<s.size();i++,j++){
                k=1;
           while(s[i]==s[i+1]){
                k++;
                i++;}

                int t=s[i]-96;
                arr.push_back( make_pair(t,k));
                }

        for(int a0 = 0; a0 < n; a0++){
                int x;
                cin >> x;
                int k=0;
            for(int i=0;i<arr.size();i++){
            if(x%arr[i].first==0)
                if(x/arr[i].first<=arr[i].second){
                    k=1;
                    break;}
                        }
                if(k==0)
                    cout<<"No"<<endl;
                else
                    cout<<"Yes"<<endl;}

    return 0;
}
