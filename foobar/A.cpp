#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin>>n;
	std::vector<int> v(n);
	int prev = 0;
	for (int i = 0; i < n; ++i)
	{
		int temp=0;
		cin>>temp;
		v[i]=prev+temp;
		prev=v[i];
	}
	int flag=0;
	for (int i = 0; i < n; ++i)
	{
		//cout<<v[i]<<" ";
		if(v[i]%2==1){
			flag=1;
			break;
		}
		else if(v[i]>=100){
			break;
		}
	}
	if(v[n-1]<100){
		flag=1;
	}
	if(flag){
		cout<<"NO";
	}
	else
		cout<<"YES";
	return 0;
}