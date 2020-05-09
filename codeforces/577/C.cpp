#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k; 
    cin>>n>>k;
    vector<int> nums(n);

    for(int i = 0; i < n; ++i) cin>>nums[i];

    sort(nums.begin(), nums.end());

    int mid = nums[n/2];

    int out  = 0;


    for(int i = n/2 + 1; i < n; ++i){
        if(nums[i] != nums[i-1]){
            
            if(k < (i - n/2)){
                break;
            }

            int f = k / (i - n/2);
            k -= (min(nums[i] - nums[i-1], f) * (i - n/2));
            out += min(nums[i] - nums[i-1], f);

        }
    }

    out += k/(n/2 + 1);

    cout<<out + nums[n/2]<<endl;

    return 0;

}
