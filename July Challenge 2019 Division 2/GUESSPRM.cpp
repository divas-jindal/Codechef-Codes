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
ll primeFactors(ll n,ll d,ll c,ll a1,ll a2,ll &flag)  
{   
    while (n % 2 == 0)  
    {  
		if(d%2==a2 && c%2==a1)
		{
			flag=1;
			return n;
		}  
        n = n/2;  
    }  
  	for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
       while (n % i == 0)  
        {  
			if(d%i==a2 && c%i==a1)
			{
				flag=1;
				return i;
						
			} 
            n = n/i;  
        }  
    }  
    if (n > 2)  
    if(d%n==a2 && c%n==a1)
	{
		flag=1;
		return n;
	}  
}
int main()
{
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,k,n,x;
    cin>>t;
    ll z=0;
    while(z<t)
    {
    	ll flag=0,x=pow(3,10),ans,c=x*x;;
        while(flag!=1)
        {
        	ll a1,a2;
        	cout<<"1 "<<x<<endl;
        	fflush(stdout);
			cin>>a1;
        	if(a1==0)
        	{
        		flag=1;
        		ans=3;
        	}
        	else
        	{
        		x=pow(5,7);
        		ll d=x*x;
        		cout<<"1 "<<x<<endl;
        		fflush(stdout);
				cin>>a2;
				ll q=(d-c)-(a2-a1);
				if(a2==1 && a1==1)
				{
					flag=1;
					ans=2;
				}
				else
				ans=primeFactors(q,d,c,a1,a2,flag);		
			}
        	
		}
		if(flag==1)
		{
			cout<<"2 "<<ans<<endl;
			fflush(stdout);
			string s;
			cin>>s;
			if(s=="Yes")
			z++;
		}
    }
return 0;
}

