#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int k,s;
	cin>>k>>s;
	int count = 0;
	for(int a=k; a>=0; a--){
		int temp = s - a;
		//cout<<count<<endl;
		if(k>=temp){
			if((temp+1)>=0)
			count+=temp+1;
		}
		else{
			if((2*k-temp+1)>=0)
			count+=(2*k-temp+1);
		}
	}	
	cout<<count;
	return 0;
}

