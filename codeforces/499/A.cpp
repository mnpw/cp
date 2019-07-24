#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	vector<int> lol;
	lol.push_back(int(s[0])-96);
	int last=int(s[0])-96;
	int ap=1;
	for(int i=1; i<s.length(); i++){		
		if(ap>=k)
			break;
		if((int(s[i])-96)>=(last+2)){
			//cout<<last<<" "<<int(s[i])-96<<endl;
			lol.push_back(int(s[i])-96);
			last=int(s[i])-96;
			ap++;
		}
	}
	int ab =accumulate(lol.begin(), lol.end(), 0);
	if(lol.size()!=k)
		cout<<-1;
	else
		cout<<ab;
	}