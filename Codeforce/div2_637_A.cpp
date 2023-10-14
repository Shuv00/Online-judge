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
   ll n , a , b, c ,d , flag =0;
   cin >> n >> a >> b >> c >> d;
   if(n*(a+b)<c-d || n*(a-b)>c+d){
    cout << no << endl;
   }
    else cout << yes <<endl;



}




int main(){
    fast;
    /**/int t;
    cin>>t;
   for(int test=1;test<=t;test++){
        solve();
   }

}

