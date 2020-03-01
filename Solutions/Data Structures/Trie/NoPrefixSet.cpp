#include <iostream>
#include <cmath>
#include <cstring>
#define MAX 100005
#define oo 1000000009
using namespace std;

struct node{
    int val[10] = {0};
    bool A=false;
    node *link[10]={NULL};
};

node *trie = new node;

int  Add(string s){
    node *tmp = trie;
    int i;
    for(i = 0; s[i] != '\0'; i++){
        if(tmp->link[s[i] - 'a'] != NULL){
            tmp = tmp->link[s[i] - 'a'];
            tmp->val[s[i] - 'a']++;
            if (tmp->A==true)
                return 0;
        }else{
            node *new_node = new node;
            tmp->link[s[i] - 'a'] = new_node;
            tmp = new_node;
            tmp->val[s[i] - 'a']++;
               if (tmp->A==true)
                return 0;
        }
    }
    tmp->A=true;
    if(tmp->val[s[i-1] - 'a']>1)
        return 0;
    else
            return 1;
}

int main()
{   int n;
    cin>>n;
    string s1;
    while(n--)
    {       cin>>s1;
     int a;
            a=Add(s1);
     if(a==0){
         cout<<"BAD SET"<<endl<<s1<<endl;
     return 0;
     }
     else if(a==1 && n==0){
         cout<<"GOOD SET"<<endl;
     return 0;
     }
    }

    return 0;
}

