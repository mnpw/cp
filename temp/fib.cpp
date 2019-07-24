#include<bits/stdc++.h>

using namespace std;

long long int s = 98;
vector<long double> memo(s + 1, -1);


long double fib(long long int n){
    if (memo[n]!=-1) return memo[n];
    long double f = 0;
    if (n<2) f = 1;
    else f = fib(n-1) + fib(n-2);
    memo[n] = f; 
    return f;

}   

int main(){
    printf("%.0Lf",fib(s));
    return 0;
}