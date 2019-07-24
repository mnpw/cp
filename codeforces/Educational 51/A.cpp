#include<bits/stdc++.h>
using namespace std;

int main(){
	int t=0;
	cin>>t;
	string s;
	while(t-->0){
		cin>>s;
		int U=0,L=0,D=0;
		int k = s.length();
		for(int i=0; i<k; i++){
			if(islower(s[i])) L++;
			if(isupper(s[i])) U++;
			if(isdigit(s[i])) D++;
		}
		if(U==0 && L==0 && D>=1){
			s[k-1]='A';
			s[k-2]='a';
		}
		else if(U>=1 && L==0 && D==0){
			s[k-1]='a';
			s[k-2]='1';
		}
		else if(U==0 && L>=1 && D==0){
			s[k-1]='1';
			s[k-2]='A';
		}
		else if(U==0 && L>=1 && D>=1){
			int l=-1,d=-1;
			for(int i=0; i<k; i++){
			if(isdigit(s[i])&&d==-1) d=i;
			if(islower(s[i])&&l==-1) l=i;
			}
			for (int i = 0; i < k; ++i)
			{
				if(i!=d && i!=l){
					s[i]='A';
					break;
				}
			}
		}
		else if(U>=1 && L==0 && D>=1){
			int u=-1,d=-1;
			for(int i=0; i<k; i++){
			if(isdigit(s[i])&&d==-1) d=i;
			if(isupper(s[i])&&u==-1) u=i;
			}
			for (int i = 0; i < k; ++i)
			{
				if(i!=d && i!=u){
					s[i]='a';
					break;
				}
			}
		}
		else if(U>=1 && L>=1 && D==0){
			int l=-1,u=-1;
			for(int i=0; i<k; i++){
			if(isupper(s[i])&&u==-1) u=i;
			if(islower(s[i])&&l==-1) l=i;
			}
			for (int i = 0; i < k; ++i)
			{
				if(i!=u && i!=l){
					s[i]='1';
					break;
				}
			}
		}	
		cout<<s<<endl;
	}
	return 0;
}