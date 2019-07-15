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
#define fr(t) for(int i=0;i<t;i++)
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
    ll t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	if(n==0)
    	cout<<"0"<<endl;
    	else
    	{
    	vector<ll> v;
    	f(n)
    	{
    		ll x;
    		cin>>x;
    		v.pb(x);
		}
			ll ans=1e18;
			vector<vector<ll>> dp(n,vector<ll>(n));	
			for(int l=1;l<=n;l++)
			{
				for(int i=0;i<n;i++)
				{	
					int j=(i+(l-1))%n;
					dp[i][j]=1e18;
					if(l==1)
					dp[i][i]=0;
					else
					{
						ll s=0;
						for(int k=i;k!=j;k=(k+1)%n)
						{
							s+=v[k%n];
							dp[i][j]=min(dp[i][j], dp[i][k%n]+dp[(k+1)%n][j]);
						
						}
						
						s+=v[j];
						dp[i][j]+=s;	
						if(l==n && ans>dp[i][j])
						{
							ans=dp[i][j];
						}
					}
				}
				
			}
			cout<<ans<<endl;
		}
	}	
return 0;
}

