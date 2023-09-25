
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
    int      j=1;
        int ans[n];
        for(int i=0;i<n;i++){
            if(a[i]==j){
                ans[i]=j+1;
                j=j+2;

            }
            else {
                ans[i]=j;
                j++;

            }
        }
        sort(ans, ans+n);
        cout<<ans[n-1]<<endl;
    }
}
