#include<bits/stdc++.h>

using namespace std;

void query(vector<vector<int> > presum){
    long long int n, m;
    cin>>n>>m;
    long long int k = n/m;

    m = m%10;

    long long int sz = presum[m].size();

    long long ans = presum[m][sz-1]*(k/sz) + presum[m][(k%sz)-1];

    cout<<ans<<endl;
}

int main(){
    
    int n; cin>>n;
    vector<vector<long long int> > nums(10);
    for(int i = 0; i < 10; ++i){
        for(int j = 1; j <= 10; ++j){
            if((i*j)%10 == 0){
                nums[i].push_back((i*j)%10);
                break;
            }
            nums[i].push_back((i*j)%10);
        }
    }

    for(int i = 0; i < 10; ++i){
        for(int j = 1; j < nums[i].size(); ++j){
            nums[i][j] += nums[i][j-1]; 
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }

    while(n-- > 0) query(nums);
}