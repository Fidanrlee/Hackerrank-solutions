#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int arr[100000][2];

int tapgetir(int ar[] ,int n){

	arr[n-1][0]=arr[n-1][1]=0;

	for(int i=n-2;i>=0;i--){
		arr[i][0]=max(abs(ar[i]-ar[i+1])+arr[i+1][0],abs(ar[i]-1)+arr[i+1][1]);
		arr[i][1]=max(abs(1-ar[i+1])+arr[i+1][0],arr[i+1][1]);
	}

	return max(arr[0][1],arr[0][0]);
}

void f(int ar[],int n){

	memset(arr, 0, sizeof(arr[0][0]) * 100000 * 2);
	cout<<tapgetir(ar,n)<<endl;
}

int main()
{
	int q;
	cin>>q;
	while(q--){
		int b;
		cin>>b;
	int ar[b];
	for(int i=0;i<b;i++)	cin>>ar[i];
	f(ar,b);
	}
	return 0;
}
