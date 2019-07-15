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
ll valid;
ll no;
};
int ac(inp a,inp b)
{
return(a.no<b.no);
}
ll mind(ll a[],ll i, ll n)
{
	ll b=i, less=b-1,s=1,s1=1, front=n-i-1, less2=n-2, ans=0;
			while(b!=0 || front!=1)
			{
				if(b%2==1)
				{
					s*=2;
					ans=ans+a[less];
					b=(b+1)/2;
				}
				else
				{
					b=b/2;
					less=less-s;
					s=s*2;
				}
				if(front%2==1)
				{
					s1*=2;
					if(b!=0)
						b=b-1;
					else
					{
						ans=ans+a[less2];
					}
					front=(front+1)/2;
				}
				else
				{
					front=front/2;
					less2=less2-s1;
					s1=s1*2;
				}
			}
				
	return ans; 
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	ll a[n];
    	f(n-1)
    	{
    		ll x;
    		cin>>a[i];
    		
		}
		
		ll f,count=0;cin>>f;
		ll pos=INT_MAX, final=INT_MAX;
		for(int i=0;i<n-1;i++)
		{
		if(f>=a[(i)])
		{
			count++;
			ll ans=mind(a,i,n);
			if(final>ans)
   				{
   					final=ans;
   					pos=i;
   				}
		}
		}	
		if(count==0) 
			cout<<"impossible"<<endl;
		else
		{
			cout<<"possible"<<endl;
			cout<<(pos+1)%(n)<<" "<<final+f<<endl;
		}	
	}	
    
return 0;
}

