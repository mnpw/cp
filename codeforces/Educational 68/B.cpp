#include<bits/stdc++.h>


using namespace std;


void doIt(){

    // cout<<endl<<endl;
    int n, m; cin>>n>>m;

    vector<string> grid(n);
    vector<vector<pair<int, int> > > flex(n, vector<pair<int, int> >(m));
    // vector<vector<pair<pair<int, int>, int> > > flex(n, vector<pair<pair<int, int>, int> >(m));


    for(int i = 0; i < n; ++i) cin>>grid[i];

    for(int i = 0; i < n; ++i){
        int count = 0;

        for(int j = 0; j < m; ++j){
            if(grid[i][j] == '.') count++;
        }

        for(int j = 0; j < m; ++j){
            if(grid[i][j] == '.') grid[i][j] = 'X';
            flex[i][j].first = count;
            // flex[i][j].second = i;
        }

    }

    for(int j = 0; j < m; ++j){
        
        int count = 0;

        for(int i = 0; i < n; ++i){
            if(grid[i][j] != '*') count++;
        }

        for(int i = 0; i < n; ++i){
            if(grid[i][j] != '*' && grid[i][j] != '.'){
                flex[i][j].second = count - 1;
            } else{
                flex[i][j].second = count;
            }
        }

    }

    vector<pair<int, int> > temp;    

    for(int i = 0; i < n; ++i){

        for(int j = 0; j < m; ++j){
            temp.push_back(flex[i][j]);
            // cout<<flex[i][j].first<<", "<<flex[i][j].second<<"\t";
        }
        // cout<<endl;

    }

    sort(temp.begin(), temp.end());

    cout<<(temp[0].first + temp[0].second)<<endl;

}

int main(){

    int n; cin>>n;

    while(n-- > 0) doIt();

    return 0;

}