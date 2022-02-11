#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int sum1=a*b;
    int sum2=x*y;

    if(sum1>sum2){
        cout<<"No"<<"\n";
    }
    else{
        cout<<"Yes"<<"\n";
    }
}
return 0;
}