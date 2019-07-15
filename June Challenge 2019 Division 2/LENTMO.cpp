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
    ll t,k,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n],z=0,o=0,sum1=0,sum2=0,sum3=0;
        f(n)
        {
            cin>>a[i];
            sum1+=a[i];
        }
        cin>>k>>x;
       // ll m=*min_element(a,a+n);
        f(n)
        {
            sum2+=a[i]^x;
        }
        f(n)
        {
            ll y=a[i];
            if(y<(y^x))
                {
                    z++;
                    a[i]=y^x;
                }

            sum3+=a[i];

        }
        ll m=LLONG_MAX;
        if(k%2==0 && z%2!=0)
        f(n)
        {
            ll z=a[i]^x;
            //cout<<z<<endl;
            if(a[i]>z)
            {
                //cout<<a[i]-z<<" ";
                m=min((a[i])-z,m);
            }
        }
        //cout<<endl<<m<<endl;

		//cout<<sum3<<endl;

        if(n==k)
            cout<<max(sum1,sum2)<<endl;
        else
        {
            if((k%2==0 && z%2!=0))
                cout<<sum3-m<<endl;
            else
                cout<<sum3<<endl;
        }

    }
return 0;
}

