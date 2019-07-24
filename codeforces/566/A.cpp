#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<(1ll<<(n/2));
        // printf("%.0f",pow(2,(n/2)));
    }
    else{
        cout<<0;
    }
    return 0;
}

"0" => true
" 0.1 " => true
"abc" => false
"1 a" => false
"2e10" => true