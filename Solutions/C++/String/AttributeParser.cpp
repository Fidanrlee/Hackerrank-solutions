#include <iostream>
#include <map>
#include <string>
#include <iterator>
using namespace std;

    map <string,string> TagM;

    void Createmap(int n){
            string line,pretag="";

        while(n--){
            getline(cin,line);
            int i=0;
            while(line[i]!='<')i++;

            if(line[i+1]=='/'){
                int j=pretag.size()-1;
                    while(pretag[j]!='.' && j!=0){
                        pretag.erase(j);
                        j--;
                    }
                                            pretag.erase(j);
            }
            else{
                string tag, Get;
                int j=i;
                while(line[i]!=' ' && line[i]!='>' )++i;
                Get=line.substr(j+1,i-j-1);

                if(pretag=="") tag=Get;
                else           tag=pretag+"."+Get;
                pretag=tag;

                while(line[i]!='>'){
                    j=++i;
                        while(line[i]!=' ')++i;

                string atrb=line.substr(j,i-j);

                    while(line[i]!='"')++i;
                    j=++i;
                    while(line[i]!='"')++i;

                string value=line.substr(j,i-j);

                TagM[tag+"~"+atrb]=value;
                if(line[++i]=='>') break;
            }
        }
    }}

    void GetTAG(int q){
        while(q--){
                string line;

                getline(cin,line);

                string value=TagM[line];
                if(value=="")
                cout<<"Not Found!\n";
                else
                cout<<TagM[line]<<endl;
                }
    }


int main()
{
   int n,q;
   cin>>n>>q;
   cin.ignore();
   Createmap(n);

   GetTAG(q) ;

   return 0;
}
