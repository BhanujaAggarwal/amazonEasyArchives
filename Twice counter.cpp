#include<bits/stdc++.h>
using namespace std;

int twice(string a[], int n){
    unordered_map<string,int> m;
    int cnt=0;
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    for(auto i:m){
        if(i.second==2) cnt++;
    }
    return cnt;
}

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<twice(a,n)<<endl;
    }
	
	return 0;
}