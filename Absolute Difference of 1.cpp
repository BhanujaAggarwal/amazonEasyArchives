#include<bits/stdc++.h>
using namespace std;

bool diff_one(long long int n){
    string s = to_string(n);
    if(s.size()==1) return false;
    for(long long int i=0;i<s.size()-1;i++){
        long long int curr = s[i]-'0';
        long long int next = s[i+1]-'0';
        if(abs(curr-next)!=1) return false; 
    }
    return true;
}

vector<long long int> small(long long int a[],long long int n, long long int k){
    vector<long long int> ans;
    for(long long int i=0;i<n;i++){
        if(diff_one(a[i]) and k>a[i]) ans.push_back(a[i]);
    }
    return ans;
}

int main(){
    long long int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        long long int a[n];
        for(long long int i=0;i<n;i++) cin>>a[i];
        vector<long long int> ans = small(a,n,k);
        if(ans.size()){
            for(auto i:ans) cout<<i<<" ";
        }
        else cout<<"-1";
        cout<<endl;
    }
	return 0;
}