#include<bits/stdc++.h>
using namespace std;

bool isUnique(int n){
    string s = to_string(n);
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++) if(s[i]==s[i+1]) return false;
    return true;
}

int main(){
    int t,n1,n2;
    string s;
    cin>>t;
    while(t--){
        cin>>n1>>n2;
        int cnt=0;
        for(int i=n1;i<=n2;i++){
            if(isUnique(i)) cout<<i<<" ";
        }
        cout<<endl;
    }
	
	return 0;
}