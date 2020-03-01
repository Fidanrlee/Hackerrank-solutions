#include <iostream>
#include <cmath>
#include <cstring>
#define MAX 100005
#define oo 1000000009
using namespace std;

struct node{
    int val[26] = {0};
    node *link[26]={NULL};
};

node *trie = new node;

void Add(string s){
    node *tmp = trie;
    for(int i = 0; s[i] != '\0'; i++){
        if(tmp->link[s[i] - 'a'] != NULL){
            tmp = tmp->link[s[i] - 'a'];
            tmp->val[s[i] - 'a']++;
        }else{
            node *new_node = new node;
            tmp->link[s[i] - 'a'] = new_node;
            tmp = new_node;
            tmp->val[s[i] - 'a']++;
        }
    }

}

int Find (string  s){
    node *tmp = trie;
    int i;
    for(i = 0; s[i] != '\0'; i++){
        if(tmp->link[s[i] - 'a'] == NULL){
            return 0;
        }else{
            tmp = tmp->link[s[i] - 'a'];
        }
    }

        return tmp->val[s[i-1] - 'a'];
    }

int main()
{   int n;
    cin>>n;
    string s1, s2;
    while(n--)
    {
        cin>>s1>>s2;
        if(s1=="add")
            Add(s2);
        else
            cout << Find(s2)<<endl;
    }

    return 0;
}
