#include<bits/stdc++.h>
#define ll long long
using namespace std;
void phi(ll n)
{
    ll ans=n;
    for(ll i=2;i<sqrt(n);i++){
        if(n%i==0){
            ll cnt=0;
            while(n%i==0){
                n/=i;
                cnt++;
            }
            ans*=(i-1);
            ans/=i;
        }
    }
    if(n>1){
        ans*=(n-1);
        ans/=n;
    }
    //if(ans)
    cout<<ans<<endl;
}
int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        if(n==0) break;
       // n--;
        phi(n);

    }
}

