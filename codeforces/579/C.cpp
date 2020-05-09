#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n; cin>>n;
    vector<long long int> nums(n);
    long long op, val;
    for(int i = 0; i < n; ++i){
        if(i == 0) cin>>op;
        else{
            cin>>val;
            op = __gcd(op, val);
        }
    }
    long long count = 0;
    for(int i = 1; i <= sqrt(op); ++i){
        if(op%i == 0){
            if(op/i == i) count+=1;
            else count+=2;
        }
    }
    cout<<count<<endl;
}