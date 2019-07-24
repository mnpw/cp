#include<bits/stdc++.h>
using namespace std;

int main(){
	int count;
	cin>>count;
	int steps=1;
	std::vector<int> v(count);
	cin>>v[0]; 
	std::vector<int> num;
	num.push_back(1);
	int lol=0;
	for(int i=1; i<count; i++){
		cin>>v[i];
		if(v[i-1]>=v[i]){
			steps++;
			num.push_back(0);
			lol++;
		}
		num[lol]++;
	}	
	cout<<steps<<endl;
	for (int i = 0; i < num.size(); ++i)
	{
		cout<<num[i]<<" ";
	}
	return 0;
}