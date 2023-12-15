#include<bits/stdc++.h>
using namespace std;
const int MAX=1005;
const int MOD=1000000007;
char grid[MAX+5][MAX+5];
int dp[MAX+5][MAX+5];
int n;
int NoOfPath(int r,int c)
{
    //cout<<r<<" "<<c<<endl;
    if(r==n-1 && c==n-1)
        return (grid[r][c]=='.');
    if(r>=n || c>=n || grid[r][c]=='*')
        return 0;
    if(dp[r][c]!=-1)
        return dp[r][c];
    long long rslt =NoOfPath(r+1,c)+NoOfPath(r,c+1);
    if(rslt>=MOD)
        rslt%=MOD;
     return dp[r][c]=rslt;


}
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin>>grid[i][j];
    }
    memset(dp,-1,sizeof dp);
    cout<<NoOfPath(0,0)<<endl;
}

