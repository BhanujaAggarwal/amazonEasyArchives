#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>s>>n;
        unordered_map<int,int> m;
        for(int i=0;i<s.size();i++){
            while(s[i]==s[i+1]){
                i++;
            }
            m[s[i]]++;
        }
        int cnt=0;
        for(auto i:m){
            if(i.second==n) cnt++;
        }
        cout<<cnt<<endl;
    }
	
	return 0;
}