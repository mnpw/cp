#include<bits/stdc++.h>

using namespace std;

int main(){
    int d;
    vector<int> dist(3);
    for(int i=0; i<3; i++) cin>>dist[i];
    cin>>d;
    sort(dist.begin(), dist.end());
    int a1 = d - abs(dist[2]-dist[1]);
    int a2 = d - abs(dist[1]-dist[0]);
    if(a1<0) a1=0;
    if(a2<0) a2 = 0;
    cout<<a1+a2<<endl; 
    return 0;

}