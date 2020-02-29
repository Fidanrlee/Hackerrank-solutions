#include <bits/stdc++.h>
using namespace std;

long yoxla (long  i,  vector<vector<long > > &arr,int var[]){
        var[i]=true;
        long line=1;
        for(long  s=0;s<arr[i].size();s++)
            if(var[arr[i][s]]==false)
                line+=yoxla(arr[i][s],arr,var);

                return line;
                }


int main(){
    int q;
    cin >> q;

    for(int a0 = 0; a0 < q; a0++){
      long n,m,cl,cr;

        cin>>n>>m>>cl>>cr;
       int var[n+1];
       long cem=0;
       long  a,b,line=0;

        memset(var, 0, sizeof(var));
        vector<vector<long > > arr(n+1);
        for(long i=0;i<m;i++){
            cin>>a>>b;
            arr[a].push_back(b);
            arr[b].push_back(a);}

        if(cr>=cl || m==0)
            cem=n*cl;
        else if (cl>cr){
           
            for(long i=1;i<=n;i++){
                if(var[i]==false){
                    line=yoxla(i,arr,var);
                    cem+=cl+(line-1)*cr;
                    }
            }
            }
        cout<<cem<<endl;
         }


    return 0;
}
