
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes "YES"
#define no "NO"
#define FORA(i, a) for (auto &i : a) { cin>>i }
void solve()
{
    string s;
    cin>>s;
    if(s=="()") cout<<no<<endl;
    else {
        cout<<yes<<endl;
        bool dif = true;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                dif = false;
                break;
            }
        }
        if(dif){
            for(int i=0;i<s.size();i++){
                cout<<"(";
            }
            for(int i=0;i<s.size();i++){
                cout<<")";
            }
        }
        else {
            for(int i=0;i<s.size();i++){
                cout<<"()";
            }
        }
        cout<<endl;
    }



}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
