#include<bits/stdc++.h>

using namespace std;

bool isvalid(int n){
    int p=0;
    while(n!=0){
        p+=(n%10);
        n/=10;
    }
    return (p%4==0);
}

int main(){
    int n; cin>>n;
    while(!(isvalid(n))){
        n+=1;
    }
    cout<<n;
    return 0;
}