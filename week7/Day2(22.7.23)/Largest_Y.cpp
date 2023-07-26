#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ts;
    cin>>ts;
    while (ts--)
    {
        int n,k;
        cin>>n>>k;
        int ar[n+1],br[32];
        for(int i=0;i<31;i++)br[i]=0;
        for(int i=0;i<n;i++)cin>>ar[i];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<31;j++)
            {
                if((ar[i]&(1<<j)))br[j]++;
            }
        }
        int ans=-1;
        for(int j=0;j<31;j++)
        {
            if((k&(1<<j))==0)
            {
                if(br[j]>0 and br[j]<n)
                ans=k;
            }
        }
        if(ans>0){cout<<ans<<endl;continue;}
        ans=0;
        for(int j=0;j<31;j++)
        {
            if((k&(1<<j)))
            {
                if(br[j]>0 and br[j]<n)
                {
                    ans=k^(1<<j);break;
                }
            }
        }
        cout<<ans<<endl;
    }
    
}