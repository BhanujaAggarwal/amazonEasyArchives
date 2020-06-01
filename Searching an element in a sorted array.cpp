#include<bits/stdc++.h>
using namespace std;

int findnum(int a[], int n, int k){
    int l=0,r=n-1,mid;
    while(l<=r){
        mid = l + (r-l)/2;
        if(a[mid]==k) return 1;
        else if(a[mid]>k) r = mid-1;
        else l = mid+1;
    }
    return -1;
}

int main(){
	int n,t,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<findnum(a,n,k);
        cout<<endl;
    }
	return 0;
}