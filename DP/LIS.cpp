#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int ar[n+1];
     vector<int>v;
     for(int i=0;i<n;i++)
        cin>>ar[i];
     v.push_back(ar[0]);
     for(int i=1;i<n;i++)
     {
         int lower=lower_bound(v.begin(),v.end(),ar[i])-v.begin();
         if(lower==v.size())
            v.push_back(ar[i]);
         else
            v[lower]=ar[i];
     }
     cout<<v.size()<<endl;

}

