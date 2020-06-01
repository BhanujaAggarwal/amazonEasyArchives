#include<bits/stdc++.h>
using namespace std;

string replace(string s1, string s2){
    string ans="";
    unordered_set<char> s;
    for(auto i:s2) s.insert(i);
    for(auto i:s1){
        if(s.find(i)==s.end()) ans+=i;
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    string s1,s2;
    while(t--){
        cin>>s1>>s2;
        cout<<replace(s1,s2)<<endl;
    }
	
	return 0;
}