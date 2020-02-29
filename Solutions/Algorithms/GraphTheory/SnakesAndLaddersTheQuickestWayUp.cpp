#include <bits/stdc++.h>
using namespace std;

struct Graph {
  int k;
   int motion =0;
   Graph *next;
};

int main(){

int q;
cin>>q;
while(q--){

    int Nl,Ns;
    bool visit [101];
    vector <int>v (101);
    memset(visit ,0,sizeof(visit));
    cin>>Nl;

    for(int i=0;i<Nl;i++){
        int a,b;
        cin>>a>>b;
        v[a]=b;
    }
         cin>>Ns;
      for(int i=0;i<Ns;i++){
        int a,b;
        cin>>a>>b;
        v[a]=b;
    }
         Graph *G=new Graph;
         G->k=1;
  Graph *cur=G;
visit [1]=1;
int kk=0;
       while(G->k!=100){
            for(int i=1;i<=6;i++){

                    int val=G->k+i;
                    if(v[G->k+i]!=0)
                     val=v[G->k+i];

            if(val<=100 && val>=1 && visit[val]==0){
                    visit[val]=1;
                 Graph *N=new Graph;
                N->k=val;
                N->motion=G->motion+1;
                    cur->next=N;
                    cur=N;

            }
            if(val==100){
                    kk=1;
                break;#include <bits/stdc++.h>
using namespace std;

struct Graph {
  int k;
   int motion =0;
   Graph *next;
};

int main(){

int q;
cin>>q;
while(q--){

    int Nl,Ns;
    bool visit [101];
    vector <int>v (101);
    memset(visit ,0,sizeof(visit));
    cin>>Nl;

    for(int i=0;i<Nl;i++){
        int a,b;
        cin>>a>>b;
        v[a]=b;
    }
         cin>>Ns;
      for(int i=0;i<Ns;i++){
        int a,b;
        cin>>a>>b;
        v[a]=b;
    }
         Graph *G=new Graph;
         G->k=1;
  Graph *cur=G;
visit [1]=1;
int kk=0;
       while(G->k!=100){
            for(int i=1;i<=6;i++){

                    int val=G->k+i;
                    if(v[G->k+i]!=0)
                     val=v[G->k+i];

            if(val<=100 && val>=1 && visit[val]==0){
                    visit[val]=1;
                 Graph *N=new Graph;
                N->k=val;
                N->motion=G->motion+1;
                    cur->next=N;
                    cur=N;

            }
            if(val==100){
                    kk=1;
                break;
            }
            }

                if(G->next==NULL){
                     cout<<"-1"<<endl;
                   break;
                }

                    G=G->next;
       }
        if(kk==1)
       cout<<G->motion<<endl;

}

return 0;
}

            }
            }

                if(G->next==NULL){
                     cout<<"-1"<<endl;
                   break;
                }

                    G=G->next;
       }
        if(kk==1)
       cout<<G->motion<<endl;

}

return 0;
}
