#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> balloons(n);
	for(int i=0; i<n; i++){
		cin>>balloons[i];
	}
	auto it = min_element(balloons.begin(),balloons.end());
	//cout<<endl;
	int X = it-balloons.begin();
	if(n==2 && balloons[0]==balloons[1])
		cout<<-1;
	else if(n<2)
		cout<<-1;
	else{
		cout<<n-1<<endl;
		for (int i = 0; i < n; ++i)
		{
			if(i!=X)
				cout<<i+1<<" ";
		}
	}
	return 0;
}