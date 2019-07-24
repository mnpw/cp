#include<bits/stdc++.h>

using namespace std;



int main(){
    int t; cin>>t;
    vector<int> nums;
    unordered_map<int, int> freq;

    while(t-->0){
        int n; cin>>n;
        int tp;
        for(int i=0; i<n; i++) {
            cin>>tp;
            freq[tp]++;
        }
        for (auto& it: freq) {
            nums.push_back(it.second);
        }
        sort(nums.begin(), nums.end());
        int c = nums[nums.size()-1];
        int add = c;
        for(int i=nums.size()-2; i>=0; i--){
            if(nums[i]>=add){
                add -= 1;
            }
            else{
                add = nums[i];
            } 
            if(add>0) c+=add;
            else break;
        }
        cout<<c<<endl;
        freq.clear();
        nums.clear();
    }
}