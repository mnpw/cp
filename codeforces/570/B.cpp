#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t-->0){
        int n, k; cin>>n>>k;
        vector<int> nums(n);
        for(int i=0; i<n; i++) cin>>nums[i];

        sort(nums.begin(), nums.end());
        if(nums[0]+k<nums[n-1]-k) cout<<-1<<endl;
        else cout<<nums[0]+k<<endl;
    }
    return 0;
}