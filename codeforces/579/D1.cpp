#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    // cout<<"s1 size: "<<s1.size()<<endl;
    // cout<<"s2 size: "<<s2.size()<<endl;
    int start = 0, end = s1.size() - 1;
    int op = 0;
    for(int i = 0; i < s1.size(); ++i){
        for(int j = i; j < s1.size(); ++j){

            string temp = s1.substr(0, i) + s1.substr(j+1);

            

            int id = 0;
            for(int s = 0; s < temp.size(); ++s){
                if(temp[s] == s2[id]) {id++; if(id == s2.size()) break;}
            }
            if(id == s2.size()) {op = max(op, int(s1.size() - temp.size()));}
            // cout<<endl<<endl;
        }
    }
    cout<<op<<endl;

    return 0;
}