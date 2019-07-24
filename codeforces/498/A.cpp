#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0; i<n; i++)
		cin>>v[i];
	for(int i=0; i<n; i++)
		if(v[i]&1)
			cout<<v[i]<<" ";
		else
			cout<<v[i]-1<<" ";
	return 0;
}