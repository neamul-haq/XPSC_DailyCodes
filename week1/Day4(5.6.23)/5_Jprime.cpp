#include<bits/stdc++.h>
using namespace std;

const int maxx=1e4;
bool prime[maxx];

void sieve()
{
    prime[1]=false;
    for(int i=2; i<=maxx; i++)
    {
        prime[i]=true;
    }
    for(int i=2; i*i<=maxx; i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*i; j<=maxx; j+=i){
                prime[j]=false;
            }
        }
    }
}

int main()
{
    sieve();

    int n;
    cin >> n;
    for(int i=2; i<=n; i++)
    {
        if(prime[i]) cout << i << " ";
    }
}
