#include<bits/stdc++.h>

using namespace std;



int main(){

    int n, k; cin>>n>>k;

    vector<int> nums(n);

    for(int i = 0; i < n; ++i) cin>>nums[i];

    sort(nums.begin(), nums.end(), greater<int>());
    
    int start = 0;
    int end = 0;
    long long cost = 0, m = INT_MAX;

    for(int i = k-1; i < n; ++i){
        

        int nom = nums[i]; 
        if(ceil(log2(i)) != floor(log2(i))) {nom = powl(2, floor(log2(nom))); cost+=1;}

        cost += floor(log2(nums[i-1]/nums[i]))*(end - start + 1);

        while((nums[end] >= 2*nom || nums[end]==nom) && end < i){
            cout<<"start "<<start<<"  end "<<end<<endl;
            cost += int(log2(nums[end]/nom));
            if(end - start + 1 == k-1) {
                cost -= int(log(nums[start]/nom)/log(2));
                start++; end++;
                break; 
            }
            end++;
        }
        cout<<"cost "<<cost<<endl;
        if(end - start + 1 == k-1) m = min(cost, m);
        
        
    }

    cout<<m<<endl;

}