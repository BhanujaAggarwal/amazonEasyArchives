#include<bits/stdc++.h>
using namespace std;

int len(int a[], int n){
    int maxi=1,i=0,curr=1;
    while(i<n){
        while(a[i]<a[i+1] and i+1<n){
            i++,curr++;
        }
        maxi=max(maxi,curr);
        curr=1;
        i++;
    }
    return maxi;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<len(a,n)<<endl;
    }
	
	return 0;
}