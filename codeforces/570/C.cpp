#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t-->0){
        long long k, n, a, b; cin>>k>>n>>a>>b;
        long long ans = 0;
        if(n*b>=k){
            ans = -1;
        }
        else if(n*a<k){
            ans = n;
        }
        else{
            ans = (k-(b*n)-1)/(a-b);
        }
        printf("%lli\n", ans);
    }
    return 0;
}