#include<bits/stdc++.h>

using namespace std;

void doIt(){
    int n; cin>>n;
    // unordered_map<int, int> freq;
    vector<int> nums(4*n);
    for(int i = 0; i < 4*n; ++i){  
        cin>>nums[i];
    }
    sort(nums.begin(), nums.end());
    int start = 0, end = 4*n - 1;
    int ar = nums[start]*nums[end];
    bool flag = true;
    while(start <= end){
        if(nums[start]*nums[end] != ar || nums[start] != nums[start+1] || nums[end] != nums[end-1]){
            flag = false;
            break;
        }
        start += 2;
        end -= 2;
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    int n; cin>>n;
    while(n-- > 0) doIt();
    return 0;
}