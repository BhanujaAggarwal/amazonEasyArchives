#include<bits/stdc++.h>
using namespace std;

long long int max_product(int a[], int b[], int n){
    long long int ans=0;
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++) ans+=a[i]*b[i];
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        cout<<max_product(a,b,n)<<endl;
    }
	
	return 0;
}