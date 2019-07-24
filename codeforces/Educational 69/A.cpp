#include<bits/stdc++.h>

using namespace std;

void doIt(){
    int n; cin>>n;
    vector<int> nums(n);
    int zero_count = 0;
    for(int i = 0; i < n; ++i){
        cin>>nums[i];
        if(nums[i] == 0) zero_count++;
    }

    if(n < 3){
        cout<<0<<endl;
        return;
    }

    sort(nums.begin(), nums.end()); 

    int ans = min(min(nums[nums.size() - 1], nums[nums.size() - 2]) - 1, n - 2);

    if(ans < 0) cout<<0<<endl;
    else cout<<ans<<endl;

}

int main(){

    int n; cin>>n;
    while(n-- > 0) doIt();
    return 0;

}