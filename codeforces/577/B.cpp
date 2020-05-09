#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;
    vector<int> nums(n);
    int odd = 0, even = 0;
    long long int sm = 0;

    for(int i = 0; i < n; ++i){
        cin>>nums[i];
        if(nums[i]%2 == 0) even++;
        else odd++;
        sm += nums[i];

    }

    for(int i = 0; i < n; ++i){
        if(nums[i] > (sm - nums[i])){
            cout<<"NO\n";
            return 0;
        }
        
    }

    if(odd%2 != 0) cout<<"NO\n";
    else cout<<"YES\n";
    
    return 0;

}