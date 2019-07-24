#include<bits/stdc++.h>
using namespace std;
void fail();
int main(){
	int n = 0;
	cin>>n;
	vector<int> v(n),f(101);
	std::vector<char> group(n,'X');
	for(int i=0; i<n; ++i){
		cin>>v[i];
		f[v[i]]+=1;
	}
	int count=0, k=-1;
	for(int i=1; i<101; ++i) {
		if(f[i]==1) count++;
		if(f[i]>2 && k==-1) k=i;
	} 
	//cout<<k<<endl;
	if(count%2 && k==-1) fail();
	cout<<"YES\n";
	int t=0,i=0;
	while(t<count/2){
		if(f[v[i]]==1) {
			group[i]='A';
			t++;
		}			
		i++; 
	}
	int flag=0;
	if(count%2)
		flag=1;
	for(int i=0; i<n; i++){
		if(v[i]==k && flag==1){
			cout<<'A';
			flag=0;
		}
		else if(group[i]=='X') cout<<'B';
		else cout<<group[i];
	}
	//cout<<endl<<count<<endl<<v[k]<<endl<<k;
	return 0;
}
void fail(){
	cout<<"NO\n";
	exit(0);
}

/*
1 2 3 4 5 5 6 6 6 7 9 11
A A A B B B A B B B B B

A: 1 2 3 6
B: 4 7 9 11 5 5  6 6
*/