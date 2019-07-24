#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n = 0;
	cin>>n;
	if((n+1)%3==0){
		cout<<1<<" "<<2<<" "<<n-3;
	}
	else{
		cout<<1<<" "<<1<<" "<<n-2;
	}
	return 0;

}