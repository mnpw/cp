#include<bits/stdc++.h>

using namespace std;

void doIt(){
    //conv s - > t using p 
    string s, t, p;
    cin>>s>>t>>p;
    vector<int> freq(26);

    for(int i = 0; i < p.size(); ++i){

        freq[p[i]-'a']++;

    }

    int s1 = 0, t1 = 0;

    bool flag = false;

    while(true){

        if(s1 < s.size() && t1 >= t.size()){
            flag = true;
            break;
        }

        if(s1 == s.size() && t1 == t.size()){
            flag = false;
            break;
        }

        if(s[s1] != t[t1]){
            if(freq[t[t1] - 'a'] != 0){
                freq[t[t1] - 'a']--;
                t1++;
            }
            else{
                flag = true;
                break;
            }
        } else if(s[s1] == t[t1]){
            s1++;
            t1++;
        }

    }

    if(flag) cout<<"NO\n";
    else cout<<"YES\n";

}

int main(){

    int n; cin>>n;

    while(n-- > 0) doIt();

    return 0;

}