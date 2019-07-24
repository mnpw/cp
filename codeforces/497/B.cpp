#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	long long a,b;
	std::vector<int> v(n);
	cin>>a>>b;
	v[0]=max(a,b);
	int flag=0;
	for (int i = 1; i < n; ++i)
	{
		cin>>a>>b;
		if(a>v[i-1] && b>v[i-1]){
			flag=1;
			break;
		}
		else if(a<=v[i-1] && b<=v[i-1]){
			v[i]=max(a,b);
		}
		else
			v[i]=min(a,b);
	}
	if(flag)
		cout<<"NO";
	else
		cout<<"YES";
}