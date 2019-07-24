#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t-->0){

        string s1, s2;
        cin>>s1>>s2;
        int w1 = 0, w2 = 0;
        int a=0, b=0;
        // if s1.size()==1 
        bool flag = true;
        while(a<s1.size() || b<s2.size()){
            while(a+1<s1.size() && s1[a]==s1[a+1]){
                a++;
                w1++;
            }
            while(b+1<s2.size() && s2[b]==s2[b+1]){
                b++;
                w2++;
            }
            // cout<<s1[a]<<" "<<s2[b]<<endl;
            if(s1[a]!=s2[b] || w1>w2){
                flag = false;
                break;
            }
            w1 = 0;
            w2 = 0;
            a++; b++;
        }
        if(!flag) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}