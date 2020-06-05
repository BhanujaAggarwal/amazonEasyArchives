#include<bits/stdc++.h>
using namespace std;

int ans(string s, int k){
    int c[26]={0},cnt=0;
    for(int i=0;i<s.size();i++) c[s[i]-'a']++;
    for(int i=0;i<k;i++){
        sort(c,c+26,greater<int>());
        if(!c[0]) return 0;
        c[0]--;
    }
    for(int i=0;i<26;i++){
        cnt += (c[i])*(c[i]);
    }
    return cnt;
}

int main(){
    int t,n,k;
    string s;
    cin>>t;
    while(t--){
        cin>>s>>k;
        cout<<ans(s,k)<<endl;
    }
	
	return 0;
}