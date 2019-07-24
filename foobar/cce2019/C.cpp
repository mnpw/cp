#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin>>n;
	long long int sum = 0;
	for(int i=1; i<=n; i++){
		sum+= (1.5)*i*(i+1); 
	}
	cout<<sum;
	return 0;
}