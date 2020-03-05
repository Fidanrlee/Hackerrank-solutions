#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

    int say(vector<long long> pairs[],long i,long long &u,bool a[]){
        a[i]=true;
                    u++;
            for(long long s=0;s<pairs[i].size();s++){
            if(a[pairs[i][s]]==false)
                say(pairs,pairs[i][s],u,a);}
        return u;}

int main()
{   long long N, I;
    cin >> N >> I;
    vector<long long > pairs[N];
    for (long long i = 0; i < I; ++i){
       long long a, b;
        cin >> a >> b;
        pairs[a].push_back(b);
        pairs[b].push_back(a);}

    long long H=N*(N-1)/2;
    long long u=0;
    bool a[N]={0};

    for (long long i = 0; i < N; i++) {
        u=0;
        if(a[i]==0)
        u=say(pairs,i,u,a);
        H=H-u*(u-1)/2;}

    cout << H<< endl;
    return 0;
}
