#include<bits/stdc++.h>
using namespace std;

int odd(int a[], int n){
    unordered_map<int,bool> m;
    for(int i=0;i<n;i++){
        m[a[i]]=!m[a[i]];
    }
    for(auto i:m) if(i.second==1) return i.first;
    return 0;
}

int main(){
	int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<odd(a,n)<<endl;
    }
	return 0;
}