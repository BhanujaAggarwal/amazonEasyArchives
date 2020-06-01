#include<bits/stdc++.h>
using namespace std;

int index(int a[], int n){
    for(int i=0;i<n-1;i++){
        if(a[i+1]<a[i]) return a[i];
    }
    return a[n-1];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<index(a,n)<<endl;
    }
	return 0;
}