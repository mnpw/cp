#include<bits/stdc++.h>

using namespace std;

void doIt(){
    string s1; cin>>s1;
    string s2; cin>>s2;
    int one_s1 = -1;
    int one_s2 = -1;

    for(one_s2 = s2.size() - 1; one_s2 >= 0; --one_s2){
        if(s2[one_s2] == '1') break;
    }

    for(one_s1 = s1.size() - 1 - (s2.size() - one_s2 - 1); one_s1 >= 0; --one_s1){
        if(s1[one_s1] == '1') break;
    }

    

    // cout<<one_s1<<" "<<one_s2<<endl;

    int out = (s1.size() - one_s1 - 1) - (s2.size() - one_s2 - 1);
    if(out < 0) out = 0;

    cout<<out<<endl;

}

int main(){
    cout<<3%0;
    int t; cin>>t;
    while(t-- > 0) doIt();
    return 0;
}