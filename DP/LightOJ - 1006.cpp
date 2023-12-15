#include<bits/stdc++.h>
using namespace std;
const int M =10000007;
int main()
{
    int t;
    cin>>t;
    int cs=1;
    while(t--)
    {
        long long ar[10010];
        long long n;
        cin>>ar[0]>>ar[1]>>ar[2]>>ar[3]>>ar[4]>>ar[5]>>n;
        for(int i=6;i<=n;i++)
            ar[i]=(ar[i-1]%M +ar[i-2]%M +ar[i-3]%M +ar[i-4]%M +ar[i-5]%M +ar[i-6]%M)%M;
        cout<<"Case "<<cs++<<": "<<ar[n]%M<<endl;
    }
}


