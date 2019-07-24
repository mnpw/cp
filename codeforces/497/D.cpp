#include<bits/stdc++.h>
using namespace std;

std::vector<int> printDivisors(int n, std::vector<int> v)
{
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
            	v.push_back(i);
                //printf("%d ", i);
 
            else {
                v.push_back(i);
            	v.push_back(n/i);
                //printf("%d %d ", i, n/i);
            }    
        }
    }
    return v;
}

int countDivisors(int n)
{
    int count=0;
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
            	count++;
                //printf("%d ", i);
 
            else {
                count+=2;
                //printf("%d %d ", i, n/i);
            }    
        }
    }
    return count;
}

int main(){
	long long n,a,b,c;
	cin>>a>>b>>c;
	std::vector<int> v;
	long long m = max(a,max(b,c));
	n=a*b*c;
	v=printDivisors(m,v);
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}
	long long count=0;
	cout<<endl;
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<countDivisors(v[i])<<" ";
	}
	//cout<<count;
}
