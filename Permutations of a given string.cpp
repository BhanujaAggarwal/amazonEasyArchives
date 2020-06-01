#include<bits/stdc++.h>
using namespace std;

void permu(string s, int l,int r,vector<string> &ans){
    if(l==r) ans.push_back(s);
    else{
        for(int i=l;i<=r;i++){
            swap(s[i],s[l]);
            permu(s,l+1,r,ans);
            swap(s[i],s[l]);
        }
    }
}

int main(){
	int t;
	cin>>t;
	string s;
	while(t--){
	    cin>>s;
        int n = s.size();
        vector<string> ans;
	    permu(s,0,n-1,ans);
	    sort(ans.begin(),ans.end());
	    for(auto i:ans) cout<<i<<" ";
	    cout<<endl;
	}
	return 0;
}