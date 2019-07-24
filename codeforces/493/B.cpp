#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,B;
	cin>>n>>B;
	vector<int> a(n);
	for(int i=0; i<n; i++)
		cin>>a[i];
	std::vector<int> v(n-1),count(n);
	for(int i=0; i<n-1; i++)
		v[i]=abs(a[i]-a[i+1]);
	int p;
	if(a[0]&1)
		count[0]=-1;
	else
		count[0]=1;
	p=count[0];
	for(int i=1; i<n; i++){
		if(a[i]&1)
			count[i]=p-1;
		else
			count[i]=p+1;
		p=count[i];
	}
	/*
	cout<<endl;
	for(int i=0; i<n-1; i++)
		cout<<v[i]<<"\t";
	cout<<endl;
	for(int i=0; i<n; i++)
		cout<<count[i]<<"\t";
	cout<<endl;
	*/
	std::vector<int> temp;
	for (int i = 0; i < n-1; ++i)
	{
		if(count[i]==0)
			temp.push_back(v[i]);
	}
	sort(temp.begin(),temp.end());
	int lol=0;
	int z=0;
	for (z; z < temp.size(); ++z)
	{
		lol+=temp[z];
		if(lol>B)
			break;
	}
	cout<<z;

	

}