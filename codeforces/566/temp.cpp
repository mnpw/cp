#include<bits/stdc++.h>

using namespace std;

int tra(int i, int j, vector<vector<int> > &reach){
    int s = 0;
    // cout<<" i "<<i<<" j "<<j;
    if(reach[i][j]!=0) return reach[i][j];
    if(i==0 && j==0) s = 1;
    else if(i==0){
        s = tra(i, j-1, reach);
    }
    else if(j==0){
        s = tra(i-1, j, reach);
    }
    else{
        s = tra(i-1, j, reach) + tra(i, j-1, reach);
    }
    reach[i][j] = s;
    return s;
}

int main() {
    unsigned int A;
    cin>>A;
    int count = 0;
    while(A!=0){
        // cout<<(A&1)<<endl;
        if(A&1==1) count+=1;
        // cout<<A<<endl;
        A = A>>1;
    }
    cout<<count;
    return 0;
}