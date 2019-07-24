#include<bits/stdc++.h>
#define MOD 1000000007

using namespace std;
int main(){
	int t=0;
	cin>>t;
	while(t-->0){
		long long n,a,b;
		cin>>n>>a>>b;
		long long X = (((((n%MOD)*((n+1)%MOD))%MOD)*((2*n+1)%MOD))/6)%MOD;
		long long Y = ((((((n-2)%MOD)*((n-1)%MOD))%MOD)*((2*n-3)%MOD))/6)%MOD;
		if(n<=2){
			Y=0;
		}
		long long sum = ((a*Y)%MOD + (b*(X-Y))%MOD)%MOD;
		//cout<<"\n"<<X<<"\n"<<Y<<"\n";
		cout<<sum<<endl;
	}
	return 0;
}