#include<bits/stdc++.h>

using namespace std;


int main(){
    
    int n; cin>>n;
    string s; cin>>s;

    unordered_map<char, vector<int>> freq;

    for(int i = 0; i < n; ++i){
        freq[s[i]].push_back(i);
    }

    int m; cin>>m;
    string name;

    int mx;
    vector<int> chrs(26, 0);

    for(int i = 0; i < m; ++i){
        cin>>name;
        mx = INT_MIN;

        for(int j = 0; j < name.size(); ++j){

            mx = max(mx, freq[name[j]][chrs[name[j]-'a']]);
            chrs[name[j]-'a']+=1;
        }
        fill(chrs.begin(), chrs.end(), 0);
        cout<<mx+1<<endl;

    }


    return 0;

}