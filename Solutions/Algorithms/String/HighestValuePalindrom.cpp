#include <iostream>
#include <string>
using namespace std;

int main(){
   int n,k;
    string s;
    cin>>n>>k>>s;
    int arr[n/2+1]={0};

    for(int i=0;i<=n/2;i++)
        if(s[i]!=s[n-1-i]){
            arr[i]=1;
            if(s[i]>s[n-1-i])
                s[n-1-i]=s[i];
            else
                s[i]=s[n-1-i];
            k--;}
                if(k<0){
                    cout<<"-1";
                    return 0;}
                else if(k==0){
                    cout<<s;
                    return 0;
                }
                else {
            int min=100,m,t,i;
            for(i=0;i<=n/2;i++){
                  //  cout<<k;
                 if(arr[i]==1 && k>0 && s[i]!='9'){

                    s[i]=s[n-1-i]='9';
                    k--;
                 }
                 else if( arr[i]==0 && k>1 && s[i]!='9'){
                     s[i]=s[n-1-i]='9';
                    k-=2;
                 }
                 else if( arr[i]==0 && k==1 && n%2==1 && n/2==i && s[i]!='9'){
                     s[i]=s[n-1-i]='9';
                        k--;
                     //  cout<<arr[i]<<endl;
                    }
                   }

                }

             //   cout<<k<<endl;
              cout<<s;
    return 0;
}
