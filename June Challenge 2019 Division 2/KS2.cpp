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
    ll t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll x=n,s=0;
        while(x>0)
        {
            s+=x%10;
            x/=10;
        }
        ll a=(s%10);
        if(a>0)
        {
            cout<<n<<10-a<<endl;
        }
        else
        {
            cout<<n<<"0"<<endl;
        }

    }
return 0;
}

