#include<bits/stdc++.h>

using namespace std;

int main(){

    int n; cin>>n;

    vector<int> nums(n);

    for(int i = 0; i < n; ++i){
        cin>>nums[i];

    }
    int flag = 0;
    for(int i = 1; i <= n - 2; ++i){
        // cout<<nums[i];
        if(nums[i-1] > nums[i] && nums[i+1] > nums[i]){
            flag = 1;
            break;
        }

    }

    if(flag == 1) cout<<"NO\n";
    else cout<<"YES\n";


    return 0;
}