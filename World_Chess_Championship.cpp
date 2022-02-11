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
    int x;
    cin>>x;
    string s;
    cin>>s;

    // ll total_prize=100*X;

    int carlsen=0;
    int chef=0;
    int draw=0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='C'){
            carlsen++;
        }
        else if(s[i]=='N'){
            chef++;
        }
        else if(s[i]=='D'){
            carlsen++;
            chef++;
        }
    }
    // cout<<carlsen.size()<<"\n";
    if(carlsen>chef){
        cout<<(60*x)<<"\n";
    }
    else if(carlsen<chef){
        cout<<(40*x)<<"\n";
    }
    else{
        cout<<(55*x)<<"\n";
    }
}
return 0;
}