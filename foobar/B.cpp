#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int count=0;
	int sid_paper=0, sid_rock=0;
	for(int i=0; i<n; i++){
		if(s[i]=='P'){
			if(sid_paper<sid_rock){
				sid_paper+=1;
				count+=0;
			}
			else{
				count-=1;
				sid_rock+=1;
			}
		}
		else if(s[i]=='R'){
			if(sid_rock>sid_paper){
				sid_paper+=1;
				count+=1;
			}
			else{
				count+=0;
				sid_rock+=1;
			}
		}
	}
	cout<<count;
	return 0;
}