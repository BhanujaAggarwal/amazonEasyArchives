#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        n = s.size();
        int i=0,cnt;
        string ans="";
        while(i<n){
            cnt=1;
            while(s[i]==s[i+1] and i+1<n){
                cnt++;
                i++;
            }
            ans+=s[i];
            ans+=to_string(cnt);
            i++;
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
	
	return 0;
}