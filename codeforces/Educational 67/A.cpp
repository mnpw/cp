#include<bits/stdc++.h>

using namespace std;


int main(){
    int t; cin>>t;

    while(t-- > 0){
        int n, s, t; cin>>n>>s>>t;
        if(s<t) swap(s,t);
        // cout<<s-(s+t)%10<<" "<<t-(s+t)%10<<endl;
        int out = max(s-(s+t)%n, t-(s+t)%n)+1;
        if(s + t < n) cout<<max(s, t)+1;
        else if(out > n) cout<<1<<endl;
        else cout<<out<<endl;
    }

    return 0;

}