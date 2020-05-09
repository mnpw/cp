#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    
    vector<int> freq_s1(26, 0);
    vector<int> freq_s2(26, 0);
    
    
    int start = 0, end = s2.size() - 1;
 
    for(int i = 0; i < s2.size(); ++i){
        freq_s2[s2[i] - 'a']++;
    }
 
    for(int i = 0; i < s1.size(); ++i){
        freq_s1[s1[i] - 'a']++;
    }
 
    vector<int> freq_s1_orig = freq_s1;
 
    for(int i = 0; i < s1.size(); ++i){        
        if(s2[0] == s1[i]){
            bool tp = true;
            for(int j = 0; j < 26; ++j){
                if(freq_s2[j] > freq_s1[j]){
                    tp = false;
                    break;
                }
            }
            if(tp) start = i;
        }
        freq_s1[s1[i] - 'a']--;
    }
    freq_s1 = freq_s1_orig;
    for(int i = s1.size() - 1; i >= 0; --i){
        if(s2[s2.size() - 1] == s1[i]){
            bool tp = true;
            for(int j = 0; j < 26; ++j){
                if(freq_s2[j] > freq_s1[j]){
                    tp = false;
                    break;
                }
            }
            if(tp) end = i;
        }
        freq_s1[s1[i] - 'a']--;
    }
    // cout<<start<<" "<<end<<endl;
    cout<<max(start, int(s1.size() - 1 - end));
 
    return 0;
}