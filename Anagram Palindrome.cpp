#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    unordered_map<char,bool> m;
    bool q=0;
    for(auto i:s) m[i]=!m[i];
    for(auto i:m){
        if(i.second==1){
            if(q) return false;
            else q=!q;
        }
    }
    return true;
}

int main(){
    int t,n;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        if(check(s)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
	
	return 0;
}