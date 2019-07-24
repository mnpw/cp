#include<bits/stdc++.h>

using namespace std;

// unordered_set<string> sub;


// vector<int> calc(string s){
//     vector<int> freq;
//     int a = 0;
//     char cur = s[0];
//     for(int i =0; i<n; i++){
//         if(s[i]==cur){
//             a++;
//         } 
//         else{
//             a=1;
//             cur = s[i];
//             freq.push_back(a);
//         }
//     }
//     freq.push_back(a);
//     return freq;
// }


int main(){
    int n, k; cin>>n>>k;
    string s; cin>>s;
    
    queue<string > q;
    q.push(s);
    int total =0;
    int cnt =0;
    set<string> st;
    while(q.size()!=0){
        string v = q.front();
        // cout<<v<<endl;
        q.pop();
        if(st.find(v)==st.end()){
            st.insert(v);
            total+= n-v.size();
        }
        if(st.size()==k) break;
        for(int i=0; i<v.size(); i++){
            if(i==0 || v[i]!=v[i-1]) q.push(v.substr(0,i)+v.substr(i+1));
        }
    }
    if(st.size()==k) cout<<total;
    else cout<<-1;
    return 0;
}
