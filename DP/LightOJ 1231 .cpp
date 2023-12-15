///Coin Change (I)
#include<bits/stdc++.h>
using namespace std;
const int MAX=1010;
const int MOD=100000007;
int coin[MAX+5],freq[MAX+5];
int dp[60][1050];
int n,k;
int noOfWays(int pos,int rem)
{
    if(pos==n)
        return (rem==0);
    if(rem<0)
        return 0;
    if(dp[pos][rem]!=-1)
        return dp[pos][rem];
    int total=0;
    for(int i=0;i<=freq[pos];i++)
    {
        total=(total+ noOfWays(pos+1,rem-(i*coin[pos])))%MOD;
    }
    dp[pos][rem]=total;
    return total;
}
int main()
{
    int t;
    cin>>t;
    int cs=1;
    while(t--)
    {
        memset(dp,-1,sizeof dp);
        cin>>n>>k;
        for(int i=0;i<n;i++)
            cin>>coin[i];
        for(int i=0;i<n;i++)
            cin>>freq[i];
            cout<<"Case "<<cs++<<": "<<noOfWays(0,k)<<endl;

    }
}

