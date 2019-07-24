#include<bits/stdc++.h>
using namespace std;

int main(){
	int n=0;
	cin>>n;
	long long m = 0,a,b;
	for(int i=0; i<n; i++){
		cin>>a>>b;
		m = max(m,(a+b));
	}
	cout<<m;
	return 0;
}