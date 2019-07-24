#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2){
    if(p1.first == p2.first) return (p1.second < p2.second);
    else return (p1.first < p2.first);
}

int main(){
    int n, M;
    cin>>n>>M;
    vector<int> t(n);
    
    multiset<int> hp;
    vector<int> lol;

    vector<int> cumsum(n);
    int tp = 0;

    vector<int> ans;
    int c, z;

    for(int i=0; i<n; i++){
        cin>>t[i];
        cumsum[i] = t[i] + tp;
        tp = cumsum[i]; 
        if(i==0){
            multiset<int> s = {};
            hp = s;
        }
        else{
            hp.insert(t[i-1]); 
        }
        copy(hp.begin(), hp.end(), back_inserter(lol));
        if(cumsum[i]<=M){
            ans.push_back(0);
        }
        else{
            c = cumsum[i]-M;
            z = lol.size()-1;
            multiset<int>::iterator rit=hp.end();
            // rit--;
            for(; (rit!=hp.begin() && c>0); rit--){
                c -= *rit;
                cout<<c<<"  ";
            }
            ans.push_back(hp.size() - distance(hp.begin(),rit) -1);
        }
        lol.clear();
    }

    for(int i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
    return 0;
}

