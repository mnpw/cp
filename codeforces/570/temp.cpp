#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;
    int out=0;
    bool flag = (n<0);
    if(flag) n*=-1;
    while(n>0){
        out*=10;
        out+=(n%10);
        n/=10;
    }
    if(!flag) cout<<out;
    else cout<<-out;
    return 0;
}