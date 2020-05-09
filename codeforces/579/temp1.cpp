#include<bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<int, int> table, table_copy;
    map<pair<int, int>, int> done;
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i){
        cin>>nums[i];
        table[nums[i]]++;
        table_copy[nums[i]]++;
    }
    int first, second, a, t, count = 0;
    for(int i = 0; i < n-1; ++i){
        for(int j = i+1; j < n; ++j){
            for(int k = 0; k < 2; k++){
                if(k==0){
                    first = nums[j];
                    second = nums[i];
                }
                else{
                    first = nums[i];
                    second = nums[j];
                }
                if(done[{first, second}]) continue;
                table_copy[first]++;
                table_copy[second]++;
                a = 2;
                while(true){
                    if(table[first+second] - table_copy[first+second]>0){
                        // cout<<first<<" "<<second<<"->";
                        done[{first, second}] = 1;
                        table_copy[first+second]++;
                        t = second;
                        second = first+second;
                        first = t;
                        if(second == 0 && first == 0){
                            a+=table[0] - table_copy[0] + 1;
                            break;
                        }
                        // cout<<first<<" "<<second<<endl;
                        a++;
                    } else break;
                }
                // cout<<endl<<endl;
                table_copy.clear();
                count = max(a, count);
            }
        }
    }
    cout<<count<<endl;
}