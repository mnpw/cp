#include<bits/stdc++.h>

using namespace std;


pair<bool, pair<int, int> > valid(string s, int zeros, int ones){
    int z = 0, o = 0;
    for(int i = 0; i < s.size(); ++i){
        if (s[i] == '0') z++;
        else o++;
    }
    // cout<<"hah "<<s<<" "<<z<<" "<<o<<" "<<endl;
    if(z <= zeros && o <= ones) return {true, {zeros - z, ones - o}};
    else return {false, {0, 0}};
}


int knap(int i, vector<string>& strs, int zeros, int ones, unordered_map<string, int> &sack, vector<int> &visited){
    cout<<i<<" "<<zeros<<" "<<ones<<endl;
    
    if(i >= strs.size())
        return 0;
    else if(zeros == 0 && ones == 0){
        // visited[i] = 1;
        // sack[strs[i]+to_string(zeros)+to_string(ones)] = 0;
        return 0;
    }
    else if(sack[to_string(i)+' '+to_string(zeros)+' '+to_string(ones)] > 0) return sack[to_string(i)+' '+to_string(zeros)+' '+to_string(ones)];
    
    auto check = valid(strs[i], zeros, ones);
    
    if(check.first){
        int t2 = knap(i+1, strs, check.second.first, check.second.second, sack, visited)+1;
        int t1 = knap(i+1, strs, zeros, ones, sack, visited);
        sack[to_string(i)+' '+to_string(zeros)+' '+to_string(ones)] = max(t1, t2);
    } else{
        sack[to_string(i)+' '+to_string(zeros)+' '+to_string(ones)] = knap(i+1, strs, zeros, ones, sack, visited);
    }

    return sack[to_string(i)+' '+to_string(zeros)+' '+to_string(ones)];
}
    
    
int findMaxForm(vector<string>& strs, int m, int n) {
    unordered_map<string, int> sack;
    // vector<string, vector< 
    vector<int> visited(strs.size(), 0); 
    return knap(0, strs, m, n, sack, visited);
}


int main(){
    int k; cin>>k;
    vector<string> strs(k);
    for(int i = 0; i < k; ++i) cin>>strs[i];

    int m, n; cin>>m>>n;
    cout<<findMaxForm(strs, m, n);
    return 0;
}