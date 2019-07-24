#include<bits/stdc++.h>

using namespace std;

int main(){
    int s;
    cin>>s;

    vector<int> nums(s+1, 0);
    
    int min = 0;
    for(int i=2; i<s+1; i++){
        //fill min in all empty multiple positions
        int index = i;
        if(nums[index]==0){
                    min++;

        while(index<s+1){
    //      for(int i=0; i<s+1; i++){
    //     cout<<nums[i]<<" ";
    // }    
            if(nums[index]==0){
                nums[index] = min;
                // cout<<"index:"<<index<<" min:"<<min<<endl;
            }
            index+=i;
        }
        }
    }


    for(int i=2; i<s+1; i++){
        cout<<nums[i]<<" ";
    }

    // sort(nums.begin(), nums.end());

    
    return 0;
}