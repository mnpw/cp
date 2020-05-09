#include<bits/stdc++.h>

using namespace std;



int main(){
    
    string s; cin>>s;

    vector<int> nums(s.size(), 0);
    int counter = 0;

    for(int i = 1; i < s.size(); ++i){
        if(s[i] < s[i-1]){
            counter = nums[i-1] + 10 + (s[i] - '0') - (s[i-1] - '0');
        } else counter = nums[i-1] + (s[i] - '0') - (s[i-1] - '0');
        nums[i] = counter;
    }

    vector<vector<int> > op(10, vector<int>(10, -1));

    for(int i = 0; i < 10; ++i){
        for(int j = i; j < 10; ++j){
            cout<<"I: "<<i<<" J: "<<j<<endl;
            int as = 0;
            for(int k = 1; k < nums.size(); ++k){
                if(j == 0) break;
                int diff = nums[k] - nums[k-1];
                int out = INT_MAX;
                if(i != 0) {for(int l = 0; i*l <= diff; l++){
                    if((diff - (i*l))%j == 0)
                    out = min(out, (diff - (i*l))/j + l);
                }}
                else {
                    if(diff%j == 0) out = min(out, diff/j);
                }
                if(out == INT_MAX) break;
                else as += out-1;
                cout<<"k is "<<k<<" and diff is "<<diff<<" and out is "<<out<<endl;
            }
            if(as != 0) {op[i][j] = as; op[j][i] = as;}
        }
    }

    for(int i = 0; i < 10; ++i){
        cout<<endl;
        for(int j = 0; j < 10; ++j) cout<<op[i][j]<<"\t";
    }
    cout<<endl;
    return 0;
}