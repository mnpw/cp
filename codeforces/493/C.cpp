#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n,x,y;
	string a;
	cin>>n>>x>>y;
	cin>>a;
	ll bound;
	int flag=0;
	if(y>x)
		flag=1;
	else
		bound=x/y;
	ll count_1=0,count_0blocks=0,count_1blocks=0;
	for(int i=0; i<a.length(); i++)
		if(a[i]=='1')
			count_1++;
	if(a[0]=='0')
		count_0blocks++;
	else
		count_1blocks++;
	for(int i=0; i<a.length()-1; i++)
		if(a[i]=='1' && a[i+1]=='0')
			count_0blocks++;
		else if(a[i]=='0' && a[i+1]=='1')
			count_1blocks++;
	//cout<<count_1<<" "<<count_0blocks<<" "<<count_1blocks;
	ll X=count_1blocks;
	ll Y=count_0blocks-1;
	ll total=y;
	//cout<<endl<<"X: "<<X<<" Y: "<<Y<<endl;
	if(flag)
		total+=(x*X);
	else
		total+=(y*Y);
	/*
	while(X>0 || Y>0){
		if(X==0){
			total+=(Y*y);
			break;
		}
		if(Y==0){
			total+=(X*x);
			break;
		}
		if(x<y){
			total+=x;
			X--;
		}
		else{
			total+=y;
			Y--;
		}
	}*/
	if(count_1==n)
		total=0;
	cout<<total;
	//if(count_1!=n)
	//	if(x*)
}


