#include<bits/stdc++.h>

using namespace std;


bool cp(pair<int, pair<int, int> > p1, pair<int, pair<int, int> > p2){
    if(p1.first == p2.first){
        return p1.first < p2.first;
    }
    else{
        return p1 > p2;
    }
}


int main(){

    int n, m; 

    cin>>n>>m;

    vector<int> nums(n, -1);

    int order, lower, upper;
    bool flag = false;

    vector<pair<int, pair<int, int> > > tp(m);

    for(int i = 0; i < m; ++i){

        cin>>order>>lower>>upper;
        tp[i] = make_pair(order, make_pair(lower, upper));
    }

    sort(tp.begin(), tp.end(), cp);

    for(int i = 0; i < m; ++i){

        order = tp[i].first;
        lower = tp[i].second.first;
        upper = tp[i].second.second;
        // cin>>order>>lower>>upper;
        
        if(order == 1){
            for(int j = lower; j < upper; ++j){
                if(nums[j]==-1 || nums[j]==1) nums[j] = 1;
                else{
                    flag = true;
                    break;
                }
            }
        }
        else if(order == 0){
            int cnt = 0;
            for(int j = lower; j < upper; ++j){
                if(nums[j]==-1){
                    nums[j] = 0;
                    cnt++;
                } 
            }
            if(cnt==0){
                flag = true;
                break;
            } 
        }

        if(flag) break;

    }

    if(flag) cout<<"NO\n";
    else{
        vector<int> ans(n);
        ans[0] = 1000;
        int cur_max = ans[0];
        for(int i = 1; i < n; ++i){
            if(nums[i]==1) ans[i] = cur_max;
            else{
                cur_max--;
                ans[i] = cur_max;
            }
        }
        cout<<"YES\n";
        for(int i = 0; i < n; ++i) cout<<ans[i]<<" ";
    } 

    return 0;

}