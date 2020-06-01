#include<bits/stdc++.h>
using namespace std;

int nc2(int n){
    if(n==1) return 0;
    return (n*(n-1))/2;
}

int count(string s){
    int cnt=s.size();
    unordered_map<int,int> m;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    for(auto i:m){
        cnt+=nc2(i.second);
    }
    return cnt;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<count(s)<<endl;
    }
	
	return 0;
}