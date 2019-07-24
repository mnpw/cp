#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n-->0){
        int size;
        cin>>size;
        vector<int> nums(size);
        vector<int> non_odd;
        int count = 0;
        for(int i = 0; i < size; ++i){
            cin>>nums[i];
            if(nums[i]%3==0) count++;
            else non_odd.push_back(nums[i]);
        } 
        // cout<<n<<" "<<count<<endl;
        // sort(non_odd.begin(), non_odd.end());
        int count1 = 0, count2 = 0;
        for(int i = 0; i < non_odd.size(); i++){
            non_odd[i] = non_odd[i]%3;
            if(non_odd[i]==1) count1++;
            else count2++;
        }
        int tp = min(count1, count2);
        count+=tp;
        count1 -= tp;
        count2 -= tp;
        if(count1>0) count+=(count1/3);
        if(count2>0) count+=(count2/3);
        cout<<count<<endl;
    }
    return 0;
}