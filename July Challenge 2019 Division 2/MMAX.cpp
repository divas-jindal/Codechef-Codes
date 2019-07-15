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
ll mod(string num,ll a) 
{ 
    ll res = 0;  
    for (int i = 0; i < num.length(); i++) 
         res = (res*10 + (int)num[i] - '0') %a; 
  
    return res; 
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
    	string k;
    	cin>>n;
    	cin>>k;
    	ll z=mod(k,n);
    	double a=n,c=a/2;
    
    		if(z==c)
    			cout<<n-1<<endl;
    		else if(z<c)
    			cout<<2*z<<endl;
    		else
    			cout<<2*(n-z)<<endl;
		
		
	}
	return 0;
}

