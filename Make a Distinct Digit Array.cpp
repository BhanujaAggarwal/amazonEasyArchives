#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        set<char> s;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            string ss = to_string(a[i]);
            if(s.size()==10) break;
            // for(auto j:ss) cout<<j<<" ";
            // cout<<endl;
            for(auto j:ss) s.insert((j));
        }
        for(auto i:s) cout<<i<<" ";
        cout<<endl;
    }
	
	return 0;
}