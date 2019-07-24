#include<bits/stdc++.h>

using namespace std;

int main(){
    int s;
    cin>>s;
    vector<int> nums(s, 0);
    int odd = 0, even = 0;
    for(int i=0; i<s; i++){
        cin>>nums[i];
        if(nums[i]%2==0) even++;
        else odd++;
    }
    if(even>0 && odd>0){
        sort(nums.begin(), nums.end());
    }
    // sort(oddnums.begin(), oddnums.end());

    // for(int i=0; i<s; i++){
    //     if(nums[i]%2==0){
    //         if(o<oddnums.size()){
    //         lexmin[i]=oddnums[o];
    //         o++;
    //         }
    //         else{
    //             lexmin[i]=evennums[e];
    //             e++;
    //         }
    //     }
    //     else{
    //         if(e<evennums.size()){
    //         lexmin[i]=evennums[e];
    //         e++;
    //         }
    //         else{
    //             lexmin[i]=oddnums[i];
    //         }
    //     }
    // //     for(int i=0; i<s; i++){
    // //         cout<<lexmin[i]<<" ";
    // // }
    // }

    for(int i=0; i<s; i++){
            cout<<nums[i]<<" ";
    }
    
    return 0;
}