#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int a,b,c,d;
	int common = 0;
	cin>>a>>b>>c>>d;
	if(a<=c && b<=d && b>=c){
		common=b-c;
	}
	else if(c<=a && d<=b && d>=a){
		common=d-a;
	}
	else if(c>=a && d<=b){
		common=d-c;
	}
	else if(a>=c && b<=d){
		common=b-a;
	}
	if(common)
		cout<<common;
	else
		cout<<0;
	return 0;
}