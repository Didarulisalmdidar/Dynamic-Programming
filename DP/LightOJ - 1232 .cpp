///Coin Change (II)

#include<bits/stdc++.h>
using namespace std;
const int MOD=100000007;
int main()
{
    int t;
    cin>>t;
    int cs=1;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>coin(n,0);
        for(int i=0; i<n; i++)
            cin>>coin[i];
        vector<int>dp(k+5,0);
        dp[0]=1;
        for(int i=0; i<n; i++)
        {
            for(int cur=coin[i]; cur<=k; cur++)
            {
                dp[cur]+=dp[cur-coin[i]];
                            if(dp[cur]>=MOD)
                            dp[cur]%=MOD;
               // cout<<cur<<" "<<dp[cur]<<endl;
            }
        }
        cout<<"Case "<<cs++<<": "<<dp[k]<<endl;



    }
}

