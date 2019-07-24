#include<bits/stdc++.h>

using namespace std;

long long getRange(long long num, long long k){
    return ((num-1)/k)*k;
}


int main(){
    long long n, m, k; cin>>n>>m>>k;

    // vector<int> nums(m);
    long long nm;
    long long move = 0;
    long long val = 0;
    long long count = 0;
    long long prev = -1;

    for(long long i = 0; i < m; ++i){

        cin>>nm;
        

        if(prev!= -1 && getRange(nm - move, k) > getRange(prev, k)){
            move = val;
            count++;
        }

        val++;

        // cout<<(nm - move)<<endl;



        prev = nm-move;
    }

    cout<<count+1;

    return 0;
}