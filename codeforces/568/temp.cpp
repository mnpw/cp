#include<bits/stdc++.h>

using namespace std;


int common(string s1,string s2,int i1,int i2, vector<vector<int> > &X){
    if(X[i1][i2]!=-1) return X[i1][i2];
    int op;
    if(i1==s1.size() || i2==s2.size()){
        op = 0;
    }
    else if(s1[i1]==s2[i2]){
        op = 1+common(s1, s2, i1+1, i2+1, X);
    }
    else{
        op = max(common(s1,s2,i1+1, i2, X), common(s1,s2,i1,i2+1,X));
    }
    X[i1][i2] = op;
    return op;
}   



int main(){
    
    string s1, s2;
    cin>>s1>>s2; 
    vector<vector<int> > X(s1.size()+1, vector<int>(s2.size()+1, -1));
    cout<<common(s1, s2, 0, 0, X);

    return 0;
}