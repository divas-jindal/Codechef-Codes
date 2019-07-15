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
        ll d;
        cin>>d;
        string s;
        cin>>s;
        ll p=0,k=0,flag=0;
        for(ll i=0;i<d;i++)
        {
            if(s[i]=='P')
                p++;
            if(p>=0.75*d)
            {
                cout<<"0"<<endl;
                flag=1;
                break;
            }
    }
    ll f=0;
    if(flag==0)
    {
        for(int i=2;i<d-2;i++)
        {
            if((s[i-1]=='P' || s[i-2]=='P')&&( s[i+1]=='P' || s[i+2]=='P') && s[i]=='A' && (p+k)<0.75*d)
            k++;
            if((p+k)>=0.75*d)
            {
                cout<<k<<endl;
                f=1;
                break;
            }
        }
        if(f==0)
            cout<<"-1"<<endl;
    }
    }
return 0;
}

