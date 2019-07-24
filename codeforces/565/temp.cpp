#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k; cin>>n>>k;
    string s; cin>>s;
    sort(s.begin(), s.end());
    string stages; 
    stages += s[0];
    int count = int(s[0]) - k*(int('a')-1);
    // cout<<count;
    for(int i=1; i<n && stages.size()<k; i++) {
        if(s[i]-stages[stages.size()-1]>1) {
            // cout<<s[i]<<endl;
            stages+=s[i];
            count+=int(stages[stages.size()-1]);
        }
    }
    if(stages.size()==k) cout<<count<<endl;
    else cout<<-1<<endl;
}