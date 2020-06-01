#include<bits/stdc++.h>
using namespace std;

int mini(int a[], int n, int k){
    sort(a,a+n);
    int ans=INT_MAX;
    for(int i=0;i+k-1<n;i++){
        ans = min(ans,a[i+k-1]-a[i]);
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<mini(a,n,k)<<endl;
    }
	
	return 0;
}