
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n; cin>>n;

    vector<long long> nums(n);

    unordered_map<int, int> freq, valid;

    bool flag1 = false;
    bool flag2 = true; 
    int two = 0;
    for(int i = 0; i < n; i++){
        
        cin>>nums[i];
        if(freq[nums[i]] != -1) freq[nums[i]]++;
        if(freq[nums[i]] >= 3){
            flag1 = true;
            break;
        }
        if(valid[nums[i]] != -1 && freq[nums[i]] == 2){
            if(nums[i] == 0){
                flag1 = true;
                break;
            }
            two++;
            valid[nums[i]] = -1;
        }
        flag2 = flag2 && (freq[nums[i] - 1] != 0);
    }


    if(two >=2 || flag2 || flag1){

        cout<<"cslnb\n";
        return 0;

    }

    sort(nums.begin(), nums.end());

    long long val = 0;

    for(int i = 0; i < n; ++i){

        val += nums[i]-i;

    }

    if(val%2 == 0) cout<<"cslnb\n";
    else cout<<"sjfnb\n";


    return 0;

}