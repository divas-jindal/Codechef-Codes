/*
Author: @divas_jindal
Divas Jindal, CSE@NITW
*/
#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define s(t) scanf("%d",&t)
#define p(t) printf("%d\n",t)
#define pb push_back
#define f(t) for(int i=0;i<t;i++)
#define all(t) t.begin(),t.end()
#define ci(t) cin>>t
#define co(t) cout<<t
#define mii map<int,int>
#define pii pair<int,int>
using namespace std;
ll po(ll a,ll y, ll M)
{
    int res = 10;
    a=a%M;
    while (y > 0)
    {
        if (y & 1)
            res=(res*a)%M;
        y = y>>1;
        a=(a*a)%M;
    }
    return res;
}
ll gcdExtended(ll a, ll b, ll *x, ll *y);
ll modi(ll a, ll m)
{

    ll x, y;
    ll g = gcdExtended(a, m, &x, &y);
    if (g != 1)
       return 0;
    else
    {
        ll res = (x%m + m) % m;
        return res%MOD;
    }
}
ll gcdExtended(ll a, ll b, ll *x, ll *y)
{
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
    ll x1, y1;
    ll gcd = gcdExtended(b%a, a, &x1, &y1);
    *x = y1 - (b/a) * x1;
    *y = x1;
    return gcd;
}
struct inp
{
ll index;
ll no;
};
int ac(inp a,inp b)
{
return(a.no<b.no);
}
int main()
{
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,k,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        //cout<<modi(2,MOD)%MOD<<endl;
        if(k>n)
        {
            ll l=(k-n)/(n-1) +1;
            ll ans=((l%MOD)*((2*(k-n))%MOD- (l%MOD-1+MOD)%MOD*(n-1)%MOD +MOD)%MOD)%MOD;
            cout<<(((ans%MOD*((modi(2,MOD))%MOD))%MOD)+(k-1)%MOD)%MOD<<endl;
        }
        else
             cout<<(k-1)%MOD<<endl;
    }
return 0;
}

