#include<bits/stdc++.h>

using namespace std;

void query(){
    int n; cin>>n;
    vector<int> nums(n), m(n);
    
    for(int i = 0; i < n; ++i){
        cin>>nums[i];
    }

    m[n-1] = nums[n-1];

    for(int i = n-2; i >=0; --i){
        m[i] = min(nums[i], m[i+1]);
    }

    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(nums[i] > m[i]) cnt++;
    }

    cout<<cnt<<endl;

}

int main(){
    int t; cin>>t;
    while(t-- > 0) query();
    return 0;
}