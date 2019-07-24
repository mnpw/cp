#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	vector<int> dic1(26);
	string a,b;
	cin>>n>>a>>b;
	int count =0;
	int mid = n/2;
	for(int i=0; i<mid;i++){
		int a1 = (int)a[i]-97;
		int a2 = (int)a[n-1-i]-97;
		int b1 = (int)a[i]-97;
		int b2 = (int)a[n-1-i]-97;
		dic[a1]++;
		dic[a2]++;
		dic[b1]--;
		dic[b2]--;
		max_element(dic.begin(),dic.end());
		min_element(dic.begin(),dic.end());

	}
		
	if(n&1){
		//cout<<"odd";
		if(a[mid]!=b[mid])
			count++;
	}
	return 0;
}