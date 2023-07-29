#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){
   Faster;
   int t;                  cin>>t;
   while(t--){
      int n;               cin>>n;
      string ans(n+1,'.');

      set<int> divs;

      for(ll i=1;i*i<=n;i++){
         if(n%i==0){
            divs.insert(i);
            divs.insert(n/i);
         }
      }

      int curr=1;
      int jump;
      for(auto i:divs){
         if(i>curr){
            jump=curr;
            break;
         }
         curr++;
      }

      vector<bool> visited(n+2,false);
      char currChar='a';
      for(int i=1;i<=n;i++){
         if(visited[i])continue;
         for(int j=i;j<=n;j+=jump){
            visited[j]=true;
            ans[j]=currChar;
         }
         currChar++;
      }

      reverse(ans.begin(),ans.end());
      ans.pop_back();
      reverse(ans.begin(),ans.end());

      cout<<ans<<endl;
   }
   return 0;
}
