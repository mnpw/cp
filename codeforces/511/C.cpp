#include<bits/stdc++.h>
using namespace std;

int main(){
	int n=0;
	cin>>n;
	vector<int> v(n),G(n-1);
	for(int i=0; i<n; i++) cin>>v[i];
	for(int i=0; i<n-1; i++){
		G[i]= __gcd(v[i], v[i+1]);
	}
	int count = 0;
	for(int i=0; i<n-1; i++){
		count++;
		if(G[i]!=G[0]) break;
	}
	cout<<count;
	return 0;
}