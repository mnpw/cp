#include<bits/stdc++.h>

using namespace std;

int main(){
    int s;
    cin>>s;

    vector<int> nums(2*s);
    for(int i=0; i<2*s; i++){
        cin>>nums[i];
    }
    int flag = 0;
    for(int i=1; i<2*s; i++){
        if(nums[i-1]!=nums[i]){
            flag = 1;
            break;
        }
    }

    sort(nums.begin(), nums.end());

    if(flag){
        for(int i=0; i<2*s; i++){
            cout<<nums[i]<<" ";
        }
    }
    else{
        cout<<-1;
    }

    return 0;
}