#include<bits/stdc++.h>

using namespace std;

void doIt(){
    int n, k; cin>>n>>k;
    vector<int> nums(n);
    vector<int> ans;
    int odd_count = 0;
    for(int i = 0; i < n; ++i){
        cin>>nums[i];
        if(nums[i]%2 == 1) odd_count++;
    }
    // cout<<odd_count;
    if((odd_count == 0) || (odd_count - k + 1 < 0)|| (odd_count - k + 1)%2 == 0){
        cout<<"NO\n";
        return;
    }
    int odd = 0;
    cout<<"YES\n";
    for(int i = 0; i < n; ++i){
        if(odd == k-1) break;

        if(nums[i]%2 == 1){
            cout<<i+1<<" ";
            odd++;
        }
    }
    cout<<n<<endl;

    
}


int main(){
    int n; cin>>n;

    while(n-- > 0) doIt();
    return 0;
}