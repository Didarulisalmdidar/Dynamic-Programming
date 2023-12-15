#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define dbg(a,b,c) cerr<<a<<"  "<<b<<"  "<<c<<endl;
#define mem(a,b) memset(a,b,sizeof(a))
#define endl "\n"
#define INF 1e18
#define w(t) cin>>t;while(t--)
#define kill(a) {cout<<a<<endl;continue;}
#define pi  2 * acos(0.0)
int t,ans=0,tot=0,kk=0;
const ll mxn=2e5+4,mod=1e9+7;

signed main()
{

    //fast;
    w(t)
    {
        int n,m,a,b,c,d,e,i,j,k,sm=0,sm1=0,cn=0,cn1=0,mx=-1e9,mn=1e9;
        string s,ss,sr,sa;
        bool f=false;
        int tot_weight;
        cin>>n>>tot_weight;
        int weight[n+1],profit[n+1];
        for(i=1;i<=n;i++)cin>>weight[i];
        for(i=1;i<=n;i++)cin>>profit[i];
        int dp[n+1][tot_weight+1];
        memset(dp,0,sizeof(dp));
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=tot_weight;j++)
            {
                if(weight[i]>j)dp[i][j]=dp[i-1][j];
                else dp[i][j]=max(profit[i]+dp[i-1][j-weight[i]],dp[i-1][j]);
            }
        }
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=tot_weight;j++)cout<<dp[i][j]<<" ";cout<<endl;
        }
        cout<<dp[n][tot_weight]<<endl;
    }
}
