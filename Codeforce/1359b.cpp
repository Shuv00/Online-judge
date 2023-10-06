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
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int a[n];
    for( int i=0;i<n;i++ ){
        a[i] = int(s[i])-96;
    }
    int prefix[n+1];
    prefix[0]=0;
    for(int i=1;i<n+1;i++){
        prefix[i]=prefix[i-1]+a[i-1];
    }
    int sum=0;
     while(q--){
        int x, y;
        cin >> x >> y;
        cout << prefix[y]-prefix[x-1] << endl;
    }



}

int main(){
    fast;
    /*int t;
    cin>>t;
    while(t--)*/
       solve();

}

