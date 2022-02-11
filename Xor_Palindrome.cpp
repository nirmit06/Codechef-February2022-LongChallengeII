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
    ll n;
    cin>>n;

    string s;
    cin>>s;

    ll count_0=0;
    ll count_1=0;
    

    if(n%2==0){
        for(ll i=0;i<n;i++){
            if(s[i]=='0'){
                count_0++;
            }
            else if(s[i]=='1'){
                count_1++;
            }
        }
        if((count_0%2==0 && count_1%2==0) || ((count_0%2!=0 && count_1%2!=0) &&(count_0==count_1))){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    else{
        for(ll i=0;i<n;i++){
            if(s[i]=='0'){
                count_0++;
            }
            else if(s[i]=='1'){
                count_1++;
            }
        }

        if(count_0%2!=0){
            cout<<"YES"<<"\n";
        }
        else if(count_1!=0){
            cout<<"YES"<<"\n";
        }
        // if(s[floor(n/2)]=='1' && count_1%2==0){
        //     cout<<"YES"<<"\n";
        // }
        // else if(s[floor(n/2)]=='0' && count_0%2==0){
        //     cout<<"YES"<<"\n";
        // }
        // else{
        //     cout<<"NO"<<"\n";
        // }
        

        
        // else if(count_0%2==0 && count_1%2==0){
        //     cout<<"YES"<<"\n";
        // }
        // else{
        //     cout<<"NO"<<"\n";
        // }
    }
}
return 0;
}