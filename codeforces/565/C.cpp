#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    unordered_map<int, int> mp; 
    mp[4] = 1;
    mp[8] = 4;
    mp[15] = 8;
    mp[16] = 15;
    mp[23] = 16;
    mp[42] = 23;
    vector<int> count(45,0);
    vector<int> ip(n);
    // count[1] = 1;
    for(int i=0; i<n; i++) cin>>ip[i];

    for(int i=0; i<n; i++){
        count[1] = count[4]+1;
        if(count[mp[ip[i]]] > count[ip[i]]){
            count[ip[i]]++;
        }
    }
    int z = min(min(min(min(min( count[4], count[8]), count[15]),count[16]), count[23]), count[42]);
    cout<<(n - 6*z);
    return 0;
}