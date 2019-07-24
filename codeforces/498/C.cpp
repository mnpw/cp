#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	std::vector<long long int> v(n),s1(n),s2(n);
	for(int i = 0; i < n; i++) cin>>v[i];
	
	s1[0]=v[0];
	s2[n-1]=v[n-1];	

	for(int i = 1; i < n; i++) s1[i]=s1[i-1]+v[i];
	
	for(int i = n-2; i >=0; i--) s2[i]=s2[i+1]+v[i];

	int a=0;
	int b=n-1;
	long long max=0;
	while(a<b){
		//cout<<s1[a]<<" "<<s2[b]<<endl; 
		if(s1[a]==s2[b])
			if(s1[a]>=max)
				max=s1[a];
		
		if(s1[a]<=s2[b])
			a++;
		else
			b--;
	}

	cout<<max<<endl;
	//for(int i = 0; i < n; i++) cout<<s1[i]<<" ";
	//cout<<endl;	
	//for(int i = 0; i < n; i++) cout<<s2[i]<<" ";
	

	return 0;
}
