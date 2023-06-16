#include<bits/stdc++.h>
using namespace std;

const int maxx=1e6;
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
        if(prime[n]) cout << "YES" << endl;
        else cout << "NO" << endl;
}

