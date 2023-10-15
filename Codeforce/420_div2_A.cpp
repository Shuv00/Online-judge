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
   string s; cin >> s;
   ll n = s.size(), i=0, j= n -1, c = 0;
   while(i<j){
    if(s[i]!=s[j]){
        c++;
    }
    if(c==2){
        break;
    }
    i++, j--;
   }
   if(n%2!=0 && c==0) cout << yes << endl;
   else if(c==1) cout << yes <<endl;
   else cout << no << endl;


}




int main(){
    fast;
    /*int t;
    cin>>t;
   for(int test=1;test<=t;test++){*/
        solve();
   //}

}

