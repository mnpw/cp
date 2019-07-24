#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int sum=0;
	vector<int> num(n);
	vector<int> ind(k);
	int p=-1;
	for (int i = 0; i < n; ++i) cin>>num[i];
	for(int i=0; i<k; ++i){
		auto na = max_element(num.begin(), num.end());
		sum+=*na;
		int index = na-num.begin();
		ind[i] = index;
		num[index] = 0;
	}
	cout<<sum<<endl;
	int count=0;
	for(int i =0 ;i<n; i++){
		if(num[i]==0 && count<k-1){
			count++;
			cout<<i-p<<" ";
			p=i;
		}
		else if(count==k-1&&num[i]==0)
			if(p>=0)
				cout<<n-p-1<<" ";
			else
				cout<<n<<" ";
	}
	return 0;
}