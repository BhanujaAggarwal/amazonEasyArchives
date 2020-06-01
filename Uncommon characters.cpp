#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string s1,s2;
    cin>>t;
    while(t--){
        cin>>s1>>s2;
        string ans="";
        int a[26]={0}, b[26]={0};
        for(int i=0;i<s1.size();i++){
            a[s1[i]-'a']++;
        }
        for(int i=0;i<s2.size();i++){
            b[s2[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if((a[i] and !b[i]) or (!a[i] and b[i])) ans+=char(i+97);
        }
        cout<<ans<<endl;
    }
	
	return 0;
}