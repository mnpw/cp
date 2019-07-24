#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int a,b;
	cin>>a>>b;
	cout<<"YES"<<endl;
	long long i = a;
	while(i<=b){		
		cout<<i<<" "<<i+1<<endl;
		i+=2;
	}
	return 0;
}