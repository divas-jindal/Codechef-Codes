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
    ll t,k,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll> v;
        f(n)
        {
        	ll x;
        	cin>>x;
        	v.pb(x);
		}
 	sort( v.begin(), v.end() );
    v.erase( unique( v.begin(), v.end() ), v.end() );
   
    ll a1=v[0],a2=v[v.size()-1];
    if(v.size()==2)
        cout<<v[0]+v[1]<<endl;
    else if(v.size()==1)
        cout<<2*v[0]<<endl;
    else
    {
        for(int i=0;i<v.size();i++)
        {
        	if(i!=v.size()-1)
                a1=__gcd(a1,v[i]);
            if(i!=v.size()-2)
                a2=__gcd(a2,v[i]);
        }
     cout<<max(v[v.size()-1]+a1,v[v.size()-2]+a2)<<endl;
    }
	}
return 0;
}

