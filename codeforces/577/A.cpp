#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin>>n>>m;
	
	vector<vector<int> > ans(m, vector<int>(5));
	string s;
	
	for(int i = 0; i < n; ++i){
		cin>>s;
		for(int j = 0; j < m; ++j){
            ans[j][s[j] - 'A']++;
        }
	}

    vector<int> w(m);
    for(int i = 0; i < m; ++i) cin>>w[i];
    int op = 0;

    for(int i = 0; i < m; ++i){
        int m = 0;
        for(int j = 0; j < 5; j++){
            m = max(m, ans[i][j]);
        }
        op += m*w[i];
    }
	
    cout<<op<<endl;

	return 0;
}