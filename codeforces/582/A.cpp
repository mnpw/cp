#include<bits/stdc++.h>

using namespace std;

void query(){


}

int main(){

    int n; cin>>n;
    vector<int> nums(n);
    int odd = 0, even = 0;
    for(int i = 0; i < n; ++i){
        cin>>nums[i];
        if(nums[i]%2 == 0) even++;
        else odd++;
    }

    cout<<min(even, odd)<<endl;
    return 0;

}