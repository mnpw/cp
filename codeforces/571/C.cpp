#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n; 
    cin>>n;
    vector<double> nums(n);
    vector<int> conv(n);
    double reserve = 0;
    for(int i=0; i<n; i++) {
        cin>>nums[i];
        conv[i] = trunc(nums[i]);
        reserve+=double(nums[i]-conv[i]);
        // cout<<nums[i]<<" "<<conv[i]<<" "<<reserve<<"\n";

    }
    reserve = round(reserve);
    // cout<<reserve<<endl;
    if(reserve!=0){
        int a = 0;
        while(reserve!=0 || a<n){
            // cout<<reserve<<" ";
            if(reserve<0){
                if(conv[a]!=nums[a] && nums[a]>=0){
                    conv[a]+=1;
                    reserve+=1;
                } 
                else if(conv[a]!=nums[a] && nums[a]<0){
                    conv[a]-=1;
                    reserve+=1;
                }
            }
            else if(reserve>0){
                if(conv[a]!=nums[a] && nums[a]>=0){
                    conv[a]+=1;
                    reserve-=1;
                } 
                else if(conv[a]!=nums[a] && nums[a]<0){
                    conv[a]-=1;
                    reserve-=1;
                }
            }
            else break;
            a++;
        }
    }
    
    for(int i=0; i<conv.size(); i++) cout<<conv[i]<<endl;
    
    return 0;
}