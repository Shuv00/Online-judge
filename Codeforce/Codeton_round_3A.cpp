#include<bits/stdc++.h>
using namespace std;
#define yes "YES"
#define no "NO"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
bool sortbysecond(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
void solve()
{
   ll n; cin >> n;
   ll a[n];
   for(int i=0;i<n;i++){
    cin  >> a[i];
   }
   if(a[0]==1) cout << yes << endl;
   else cout << no << endl;


}




int main(){
    fast;
    /**/int t;
    cin>>t;
   for(int test=1;test<=t;test++){
        solve();
   }

}
