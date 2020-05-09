#include<bits/stdc++.h>

using namespace std;

void doIt(){
    int n; cin>>n;
    int start, last;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i){
        cin>>nums[i];
        if(nums[i] == 1) start = i;
        if(nums[i] == n) last = i;
    }
    bool flag1 = true, flag2 = true;
    int loop1 = (start+1)%n;
    int loop2 = (last+1)%n;
    int prev = 1;
    // cout<<start<<endl;
    while(loop1 != start){
        // cout<<"loop1 "<<loop1<<endl;
        if(nums[loop1] < prev){
            flag1 = false;
            break;
        }
        prev = nums[loop1];
        loop1 = (loop1 + 1)%n;
    }
    prev = n;
    // cout<<last<<endl;
    while(loop2 != last){
        // cout<<"loop2 "<<loop2<<endl;
        if(nums[loop2] > prev){
            flag2 = false;
            break;
        }
        prev = nums[loop2];
        loop2 = (loop2 + 1)%n;
    }
    if(flag1 || flag2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


int main(){
    
    int n; cin>>n;
    while(n-- > 0) doIt();

    return 0;
}