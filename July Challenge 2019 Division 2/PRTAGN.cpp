/*
	Author: @divas_jindal
	Divas Jindal, CSE@NITW
*/
#include<bits/stdc++.h>
#include<cstdint>
#define MOD 1000000007
#define ll long long int
#define s(t) scanf("%d",&t)
#define p(t) printf("%d\n",t)
#define pb push_back
#define f(t) for(int i=0;i<t;i++)
#define p(v,t) for(int i=0;i<t;i++) cout<<v[i]<<" "; cout<<endl
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
bool comp(int a, int b) 
{ 
    return (a > b); 
}
ll dp[100005]={0};
ll mod(string num,ll a) 
{ 
    ll res = 0;  
    for (int i = 0; i < num.length(); i++) 
         res = (res*10 + (int)num[i] - '0') %a; 
  
    return res; 
}
ll bit(ll n) 
{ 
	ll c=__builtin_popcount(n);
	return c%2;
} 
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
    	ll q;
    	cin>>q;
    	set<ll, greater<ll>> s;
    	ll x,odd=0,even=0;
    	while(q--)
    	{
    		
    		
    		ll i=s.size();
    		cin>>x;
    		s.insert(x);
    		ll f=s.size();
    		if(f!=i)
    		{
    			if(bit(x)==0)
    				even++;
    			else
    				odd++;
				
    		auto itr=s.end();
    		for(auto it=s.begin();it!=itr;it++)
    		{
    			if(x!=*it)
    			{
    				ll i=s.size(),z=x^(*it);
    				s.insert(z);
    				ll f=s.size();
    				if(f!=i)
    				{
    					if(bit(z)==0)
    						even++;
    					else
    						odd++;
					}
				}
			}
		}
    		cout<<even<<" "<<odd<<endl;
		}
		
		
	}
	return 0;
}

