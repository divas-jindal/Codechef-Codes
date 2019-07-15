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
        cin>>k;
        ll ans=po(2,k-1,MOD);
        cout<<ans%MOD<<endl;
    }
return 0;
}

