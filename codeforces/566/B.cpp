#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    int h, w;
    cin>>h>>w;

    vector<vector<char> > matrix(h, vector<char>(w));

    vector<vector<int> > star_r(h);

    vector<vector<int> > star_c(w);

    vector<int> temp;

    // int flag = 0;
    int r=-1,c=-1, tp=0;
    int max_r = -1, min_r = -1, size_r = -1;
    int max_c = -1, min_c = -1, size_c = -1;




    for(int i = 0; i<h; i++){
        for(int j=0; j<w; j++) {
            cin>>matrix[i][j];
            
        }
    }



    for(int i = 0; i<h; i++){

        for(int j=0; j<w; j++) {
            if(matrix[i][j]=='*'){
                // cout<<" i "<<i<<" j "<<j<<endl;
                tp++;
                temp.push_back(j);
            }         
        }
        star_r[i] = temp;
        temp.clear();
        tp = 0;
    }
 
    int row = -1, col = -1;


    for(int i = 0; i<w; i++){
        for(int j=0; j<h; j++) {
            if(matrix[j][i]=='*'){
                // cout<<" j "<<j<<" i "<<i<<endl;
                // cout<<"yes";
                tp++;
                temp.push_back(j);
                // stars.push_back(make_pair(i,j));
            }             
        }
        star_c[i] = temp;
        tp = 0;
        temp.clear();
        
    }

    int flag = 0;

    for(int i=0; i<star_r.size(); i++){
        // cout<<" i "<<i<<endl;
        if(star_r[i].size()==1){
            // cout<<" r "<<r<<" star_r[i][0] "<<star_r[i][0]<<endl;
            if(r==-1) r = star_r[i][0];
            else{
                if(star_r[i][0]!=r){
                    // cout<<"YOS";
                    flag=1;
                    break;
                }
            }
        }
        else if(star_r[i].size()>1 && max_r==-1 && min_r==-1 && size_r==-1){
            if(i==0 || i==star_r.size()-1){
                flag = 1;
                break;
            }
            size_r = star_r[i].size();
            min_r = star_r[i][0];
            max_r = star_r[i][size_r-1];
            row = i;
        }
        else if(star_r[i].size()>1){
                    // cout<<"YOS_1";
            flag = 1;
            break;
        }
    }
// cout<<endl;

for(int i=0; i<star_c.size(); i++){
    if (flag == 1) break;
    // cout<<" i "<<i<<endl;
        if(star_c[i].size()==1){
            if(c==-1) c = star_c[i][0];
            else{
                if(star_c[i][0]!=c){
                    // cout<<"YOS_2";
                    flag=1;
                    break;
                }
            }
        }
        else if(star_c[i].size()>1 && max_c==-1 && min_c==-1 && size_c==-1){
            if(i==0 || i==star_c.size()-1){
                flag = 1;
                break;
            }
            size_c = star_c[i].size();
            min_c = star_c[i][0];
            max_c = star_c[i][size_c-1];
            col = i;
        }
        else if(star_c[i].size()>1 ){
                    // cout<<"YOS_3";

            flag = 1;
            break;
        }
    }

if(flag==1) {
    cout<<"NO";
}
else{
    if((max_r-min_r == size_r-1) && (max_c-min_c == size_c-1) && max_c>row && max_r>col && min_r<col && min_c<row ){
        cout<<"YES";
    }
    else cout<<"NO";
    // cout<<"size_r "<<size_r<<" min_r "<<min_r<<" max_r "<<max_r<<" r "<<r<<" row "<<row<<endl;
    // cout<<"size_c "<<size_c<<" min_c "<<min_c<<" max_c "<<max_c<<" c "<<c<<" col "<<col<<endl;

}
    // for(int i=0; i<star_c.size(); i++) cout<<star_r[i]<<" "<<star_c[i]<<endl;
    return 0;
}