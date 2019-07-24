#include<bits/stdc++.h>

using namespace std;

int main(){
	string first;
	string second;
	cin>>first>>second;
	int len1= first.length();
	int len2 = second.length(); 
	int minsize = min(len1,len2);
	int ret=0;
	for(int i=0; i<minsize; i++){
		if(first[len1-i-1]==second[len2-i-1])
			ret+=1;
		else
			break;
	}
	cout<<(len1+len2)-(2*ret);

	return 0;
}