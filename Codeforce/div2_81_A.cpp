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
   ll n ;
   cin >> n;
   if(n==1) cout << "0" << endl;
   else if(n%2==0){
    for(int i=0;i<n/2;i++){
        cout << "1";
    }
   }
   else if(n%2!=0){
    cout << "7";
    for(int i=0;i<(n/2)-1;i++){
        cout << "1";
    }

   }
   cout << endl;

}




int main(){
    fast;
    /**/int t;
    cin>>t;
   for(int test=1;test<=t;test++){
        solve();
   }

}

