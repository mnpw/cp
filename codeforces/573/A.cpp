#include<bits/stdc++.h>

using namespace std;


int main(){

    int n; cin>>n;

    int cat = n%4;

    if(cat == 0){
        cout<<"1 A"<<endl;
    }
    else if(cat == 1){
        cout<<"0 A"<<endl;
    }
    else if(cat == 2){
        cout<<"1 B"<<endl;
    }
    else if(cat == 3){
        cout<<"2 A"<<endl;
    }

    return 0;

}