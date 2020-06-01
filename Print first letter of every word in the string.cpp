#include<bits/stdc++.h>
using namespace std;

string firstchar(string s){
    string ans="";
    if(s[0]!=' ') ans+=s[0];
    int i=0;
    while(i<s.size()){
        if(s[i]==' ' and s[i+1]!=' '){
            ans+=s[i+1];
        }
        i++;
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s,t,ans="";
        getline(cin,s);
        cout<<firstchar(s)<<endl;
    }
	return 0;
}