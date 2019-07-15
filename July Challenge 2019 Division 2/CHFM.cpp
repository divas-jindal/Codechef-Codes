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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,m;
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	vector<int> v;
		f(n)
    	{
    		ll x;
    		cin>>x;
    		v.pb(x);
		}
		double s=0;
		s=accumulate(all(v),s);
		s=s/n;
		auto it=find(all(v),s);
		if(it!=v.end())
			cout<<it-v.begin()+1<<endl;
		else
			cout<<"Impossible"<<endl;
	}
	return 0;
}

