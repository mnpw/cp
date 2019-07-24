#include<bits/stdc++.h> 

using namespace std;

int main(){
    int n; cin>>n;
    vector<int> nums(n);
    vector<pair<int, int> > diff;
    for(int i=0; i<n; cin>>nums[i++]);
    if(n==2 || n==3){
        cout<<1; return 0;
    }
    sort(nums.begin(), nums.end());
    unordered_map<int, int> mp;
    for(int i=0; i<n-1; i++){
        mp[nums[i+1]-nums[i]]++;
    }
    cout<<mp.size()<<endl;
    for(auto elem : mp){
        cout << elem.first << " " << elem.second<<"\n";
        diff.push_back(make_pair(elem.second, elem.first));
    }
    sort(diff.begin(), diff.end());
    if(diff[0].first<n-3){
        cout<<-1<<endl;
    }
    else{
        for(int i=0)
    }
    int d = diff[0].second;
    cout<<d;
    return 0;

}