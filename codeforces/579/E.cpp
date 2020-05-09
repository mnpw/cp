#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;
    // cout<<INT_MAX<<endl;
    unordered_map<int, int> fq;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i){
        cin>>nums[i];
    }
    sort(nums.begin(), nums.end());
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(nums[i]-1 >= 1 && fq[nums[i]-1] == 0){
            fq[nums[i] - 1]++;
            cnt++;
        }
        else if(fq[nums[i]] == 0){
            fq[nums[i]]++;
            cnt++;
        }
        else if(nums[i] + 1 <= 150001 && fq[nums[i] + 1] == 0){
            fq[nums[i] + 1]++;
            cnt++;
        }
    }
    cout<<cnt<<endl;
}