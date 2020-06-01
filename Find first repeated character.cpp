#include<bits/stdc++.h>
using namespace std;

void repeat(string s){
    unordered_set<char> m;
    for(int i=0;i<s.size();i++){
        if(m.find(s[i])!=m.end()){
            cout<<s[i]<<endl;
            return;
        }
        m.insert(s[i]);
    }
    cout<<"-1"<<endl;
}

int main(){
	int t,a,n;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        repeat(s);
    }
	return 0;
}