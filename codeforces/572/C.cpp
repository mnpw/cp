#include<bits/stdc++.h>

using namespace std;


struct TreeNode{
    
    int val;
    int lower;
    int upper;

    TreeNode* left;
    TreeNode* right;

    TreeNode(int a, int b, int c){
        this->val = a;
        this->lower = b;
        this->upper = c;
        this->left = NULL;
        this->right = NULL; 
    }
};


unsigned int nextPowerOf2(unsigned int n)   
{ 
    n--; 
    n |= n >> 1; 
    n |= n >> 2; 
    n |= n >> 4; 
    n |= n >> 8; 
    n |= n >> 16; 
    n++; 
    return n; 
}

int make(int index, vector<int> &nums, vector<TreeNode*> &segTree, int start, int end){
    if(start + 1 == end) return (nums[start - 1] + nums[end - 1]) % 10;
    segTree[index] = new TreeNode(make(2*index + 1, nums, segTree, start, (end - start + 1)/2) + make(2*index + 2, nums, segTree, (end - start + 1)/2 + 1, end), start, end);
}


int query(vector<TreeNode*> &segTree, int l, int u){

}



int main(){
    int n; cin>>n;
    vector<int> nums(nextPowerOf2(n));

    for(int i = 0; i < n; ++i) cin>>nums[i];

    n = int(nextPowerOf2(n));
    vector<TreeNode*> segTree(n - 1);

    int q; cin>>q;

    while(q-- > 0){
        int l, u; cin>>l>>u;

        cout<<query(segTree, l, u);

    }

    return 0;
}