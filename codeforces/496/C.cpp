#include<bits/stdc++.h>
using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<int> nums(n);
	for(int i=0; i<n; i++)
		cin>>nums[i];
	int flag;
	int temp;
	int count=0;
	for(int i=0; i<n; i++){
		flag=0;
		for(int j=0; j<n; j++){
			if(i!=j){
				temp=nums[i]+nums[j];
				if(((temp) & (temp-1))==0)
					flag=1;
			}
			if(flag)
				break;
		}
		if(flag)
			count++;
	}
	cout<<n-count;
	return 0;
}