#include<bits/stdc++.h>

using namespace std;

void doIt(){

    int x_up, x_down, y_up, y_down;
    x_up = 100000;
    y_up = 100000;
    x_down = -100000;
    y_down = -100000;

    int n; 
    cin>>n;
    int x, y, ch1, ch2, ch3, ch4;
    bool flag = false;
    for(int i = 0; i < n; ++i){
        cin>>x>>y;

        // if(x > x_up || x < x_down || y > y_up || y < y_down){
        //     flag = true;
        //     cout<<"flag is: "<<flag;
        // }

        cin>>ch1;

        if(flag != true && ch1 == 0){
            if(x_up < x){
                flag = true;
            }
            x_down = max(x, x_down);
        }

        cin>>ch2;

        if(flag != true && ch2 == 0){
            if(y_down > y){
                flag = true;
            }
            y_up = min(y, y_up);
        }

        cin>>ch3;

        if(flag != true && ch3 == 0){
            if(x_down > x){
                flag = true;
            }
            x_up = min(x, x_up);
        }

        cin>>ch4;

        if(flag != true && ch4 == 0){
            if(y_up < y){
                flag = true;
            }
            y_down = max(y, y_down);
        }
        // cout<<endl<<"x: "<<x<<" y: "<<y<<"  "<<x_up<<" "<<x_down<<" "<<y_up<<" "<<y_down<<endl;
    }
    // cout<<"\\\\\\\\\\\\\\\\";
    if(flag){
        cout<<0<<endl;
    }
    else{
        cout<<1<<" "<<(x_up+x_down)/2<<" "<<(y_up + y_down)/2<<endl;
    }
    // cout<<"\\\\\\\\\\\\\\\\";


}


int main(){
    int n; cin>>n;

    while(n-- > 0) doIt();
    return 0;
}