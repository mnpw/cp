#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0; i<n; i++)
		cin>>v[i];
	sort(v.begin(),v.end());
	int k=0;
	for(k; k<n; k++)
		if(v[k]>v[0])
			break;
	std::vector<int> num(v.begin()+k,v.end());
	//cout<<num.size()<<endl;
	int count=0;
	int p=0;
	int i=0;
	for (; p < num.size();)
	{
		if(num[p]>v[i]){
			count++;
			i++;
			p++;
		}
		else{
			p++;
		}
		//cout<<num[i]<<" ";
	}
	cout<<count;
}
the 