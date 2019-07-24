#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,m;
	cin>>n>>m;
	map<int,int> mp;
	vector<std::pair<int,int>> mapVector;
	int x=0;
	for (int i = 0; i < m; ++i)
	{
		cin>>x;
		mp[x]++;
	}
	for (auto iterator = mp.begin(); iterator != mp.end(); ++iterator ){
		
		mapVector.push_back({iterator->second,iterator->first});
	}
	sort(mapVector.begin(),mapVector.end());
	reverse(mapVector.begin(),mapVector.end());
	int flag=0;
	for (int i=0; i<mapVector.size(); i++ )
		cout<<mapVector[i].first<<" "<<mapVector[i].second<<endl;
	cout<<endl;
	for (int i=0; i<mapVector.size(); i++ ){
		int lol=mapVector[i].first;
		int sum=0;
		for(int j=0; j<mapVector.size(); j++ ){
			cout<<mapVector[j].first/lol<<" ";
			sum+=int(mapVector[j].first/lol);
		}
		if(sum>=n){
			cout<<endl<<sum;
			flag=lol;
			break;
		}
	}
	cout<<flag<<endl;

}