#include <bits/stdc++.h>
using namespace std;

struct Graph{
	bool rt[1001][1001];
	bool var[1001][1001];
}G;

bool yoxla (string s){
	for (int i=0;i<s.size();i++)
		if(s[i]<'a') return 0;
	return 1;
}

bool abbreviation(string a, string b) {
	int an=a.size();
	int bn=b.size();

	if(G.var[an][bn]==1)return G.rt[an][bn];

	if(an==0 && bn==0)	return 1;
	else if(bn==0)		return yoxla(a);
	else if(an==0)		return 0;

	bool k;
    if(a[an-1]==b[bn-1]) {
    	a.pop_back();
    	b.pop_back();
    	k=abbreviation(a,b);
    }
    else if (a[an-1]-32==b[bn-1]) {
    	a.pop_back();
    	k=abbreviation(a,b);
    	if(k==0){
    	b.pop_back();
    	k=abbreviation(a,b);
    	}
    }
    else{
    	if(a[an-1]<'a') k=0;
    	else{
    	a.pop_back();
    	k=abbreviation(a,b);}
    }
    G.var[an][bn]=1;
    G.rt[an][bn]=k;
    return k;
}

int main()
{
    int q;
    cin >> q;
    for (int q_itr = 0; q_itr < q; q_itr++) {
    	memset(G.var, 0, sizeof(G.var[0][0]) * 1001 * 1001);
    	memset(G.rt, 0, sizeof(G.rt[0][0]) * 1001 * 1001);
        string a,b;
       cin>>a>>b;
        bool result = abbreviation(a, b);
        if(result ==1)
        	cout << "YES" << "\n";
        else cout<< "NO"  << "\n";
    }
    return 0;
}
