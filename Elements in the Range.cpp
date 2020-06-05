#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int n, int l, int r){
    if(r-l+1>n) return false;
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    for(int i=l;i<=r;i++){
        if(s.find(i)==s.end()) return false;
    }
    return true;
}

int main(){
    int t,n,l,r;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>l>>r;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        if(check(a,n,l,r)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
	
	return 0;
}