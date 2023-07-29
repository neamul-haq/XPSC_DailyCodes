#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){
   Faster;
   int t;                  cin>>t;
   while(t--){
      int n;               cin>>n;
   		vector<ll> a(n);
   		for(int i=0;i<n;i++){
   			cin>>a[i];
   		}

   		int neg=0;
   		ll mx=LLONG_MIN;
   		for(int i=0;i<n;i++){
   			if(a[i]<0){
   				neg++;
   			}
   			mx=max(mx,a[i]);
   		}

   		if(neg==n){
   			cout<<mx<<endl;
   			continue;
   		}

   		ll ans=LLONG_MIN;
   		ll eSum=0,oSum=0;
   		for(int i=0;i<n;i++){
   			if(a[i]>-1){
	   			if(i%2==0){
	   				eSum+=a[i];
	   			}
	   			else{
	   				oSum+=a[i];
	   			}
   			}
   		}

   		ans=max(eSum,oSum);

   		cout<<ans<<endl;
   }
   return 0;
}
