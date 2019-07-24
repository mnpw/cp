#include<bits/stdc++.h>

using namespace std;

int flip = 0;
vector<int> marked;

// void dfs(int node, vector<int> &visited, vector<vector<int>> const& graph){
//     // cout<<"node"<<node<<endl;
//     if(visited[node]!=1){
//     for(int i=0; i<graph[node].size(); i++) {
//         if(visited[graph[node][i]]!=1){

//             visited[graph[node][i]]=1;
//             // cout<<"current i: "<<i<<" current node: "<<graph[node][i]<<" \n";
//             if(flip==0) {
//                 marked.push_back(graph[node][i]);
//                 flip = 1;
//             }
//             else {
//                 flip = 0;
//             }
//             dfs(graph[node][i], visited, graph); 
//         }
//     }
//     }
// }


// void dfs(int node, vector<int> &visited, vector<vector<int>> const& graph){
//     if(visited[node]!=1){
//         cout<<"node"<<node+1<<endl;
//         visited[node] = 1;
//         if(flip==0) {
//             marked.push_back(node);
//             flip = 1;
//         }
//         else {
//             flip = 0;
//         }
//         for(int i=0; i<graph[node].size(); i++) dfs(graph[node][i], visited, graph); 
    
//     }
// }


void dfs(vector<int> &visited, vector<vector<int>> const& graph){
    for(int i=0; i<graph.size(); i++){
        if(visited[i]!=1){
            for(int j=0; j<graph[i].size(); j++) visited[graph[i][j]]=1;
            marked.push_back(i);
        }
    }

}




int main(){

    int n; cin>>n;

    while(n-->0){
        
        int v,e; cin>>v>>e;
        vector<vector<int>> graph(v); 
        int f, s;

        for(int i=0; i<e; ++i) { cin>>f>>s; graph[f-1].push_back(s-1); graph[s-1].push_back(f-1); }

        vector<int> visited(v, 0);

        dfs(visited, graph);

        // cout<<"yelp1"<<endl;
        cout<<marked.size()<<endl;
        for(auto i:marked){
            // cout<<"yelp2"<<endl;
            cout<<i+1<<" ";
        }
        cout<<endl;
        // cout<<"yelp3"<<endl;

        marked.clear();

    }

    return 0;

}