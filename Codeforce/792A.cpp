#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int c=0, flag=0;
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++){
			if(s[i]==s[i+1]){
				c++;
				cout<<c<<endl;
			}
			else {
				if(c==0){
					flag=1;
					break;
				}
				else {
					c=0;
				}
			}
		}
		if(flag==1){
			cout<<"NO"<<endl;
		}
		else {
			cout<<"YES"<<endl;
		}
	}
}
