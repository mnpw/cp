#include<bits/stdc++.h>


using namespace std;

bool checkValid(string s){
    int out = 0;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == '1') out++;
        else out--;
    }
    return (out != 0);
}

int main(){

    int n; cin>>n;
    string s; cin>>s;

    if(checkValid(s)){
        cout<<1<<endl<<s<<endl;
    }
    else if(n%2 == 0){
        cout<<2<<endl<<s[0]<<" "<<s.substr(1);
    }


    return 0;

}
