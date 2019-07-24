#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<vector<int> > freq(3);
    string s;
    for(int i = 0; i < 3; ++i){

        
        cin>>s;

        // cout<<(s[1] - 'm')/3<<int(s[0] - '0')<<endl;

        freq[(s[1] - 'm')/3].push_back(int(s[0] - '0'));

        // cout<<freq[(s[1] - 'm')/3].size()<<endl;
        // cout<<i<<endl;
    }

    // cout<<"here";

    int mx = 1;

    for(int i = 0; i < 3; ++i){

        sort(freq[i].begin(), freq[i].end());

        int adjacent = 1;
        int same = 1;
        int db = 0;
        if(freq[i].size() > 1)
        for(int j = 1; j < freq[i].size(); ++j){
            if(freq[i][j] - freq[i][j-1] == 1) adjacent++;
            else if(freq[i][j] - freq[i][j-1] == 0) same++;
            else if(freq[i][j] - freq[i][j-1] == 2) db++;
        }
        if(db >= 1) mx = max(mx, 2);
        mx = max(mx, max(adjacent, same));
    }

    cout<<3 - mx<<endl;

    return 0;

}