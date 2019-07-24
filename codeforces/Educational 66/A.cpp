#include<bits/stdc++.h>

using namespace std;

// unordered_map<long long int, long long int> mp(-1);

long long int findMin(long long int n, long long int k){
    // long long int steps[n+1];
    long long int *steps = (long long int*)malloc(sizeof(long long int) * (n+1));
    // vector<long long int> steps(n+1);
        steps[1] = 0;
        for(long long int i=2;i<=n;i++) {
            long long int mini = n;
            if(i%k==0) {
                mini = min(mini,steps[i/2]);
            }
            mini = min(mini,steps[i-1]);
            steps[i] = mini + 1;
        }
        long long int z = n;
        // System.out.println("Steps:");
        // while(z>1) {
        //     if(n%k==0&&steps[z/k]+1==steps[z]) {
        //         // System.out.println("div 2");
        //         z=z/2;
        //     }
        //     else {
        //         // System.out.println("minus 1");
        //         z=z-1;
        //     }
        // }

        return(steps[n]);
    
}


int main(){
    int t;
    cin>>t;
    while(t-->0){
        long long int n, k;
        cin>>n>>k;
        cout<<findMin(n, k) -1;
    }
    
    return 0;
}