#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
#define INF 1000000007
#define ll	long long

int main()
{
	string s;
	cin>>s;
	ll a=1;
	ll cem=0;
	int n=s.size();
	for(int i=n-1;i>=0;i--){
		cem=(cem+(s[i]-48)*a*(i+1))%INF;
		a=(a*10+1)%INF;
	}

	cout<<cem;
	return 0;
}
