#include<bits/stdc++.h>


using namespace std;


int main(){

    int n; cin>>n;
    vector<int> nums(n);

    for(int i = 0; i < n; ++i) cin>>nums[i];

    if(n < 3) {cout<<"NO\n"; return 0;}

    sort(nums.begin(), nums.end());

    if(nums[nums.size() - 1] >= (nums[nums.size() - 2] + nums[nums.size() - 3])){
        cout<<"NO\n";
    } 
    else{
        cout<<"YES\n";
        for(int i = 0; i < n - 2; ++i) cout<<nums[i]<<" ";

        cout<<nums[n-1]<<" "<<nums[n-2]<<endl;

    }

    return 0;
}