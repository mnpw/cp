#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n-->0){
        long long num;
        cin>>num;
        long long count2=0, count3=0, count5=0;
        // cout<<num/2;
        while(num%2==0){
            // cout<<num;
            num/=2;
            count2++;
        }
        while(num%3==0){
            num/=3;
            count3++;
        }
        while(num%5==0){
            num/=5;
            count5++;
        }
        // cout<<count2<<" "<<count3<<" "<<count5<<" "<<endl;
        if(num!=1){
            cout<<-1<<endl;
        }
        else{
            cout<<count2+(2*count3)+(3*count5)<<endl;
        }
    }
    return 0;
}