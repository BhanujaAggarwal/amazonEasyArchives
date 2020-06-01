#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	    int n,d;
	    cin>>n>>d;
	    int a[n],b[d];
	    for(int i=0;i<n;i++) cin>>a[i];
	    for(int i=0;i<d;i++){
	        b[i] = a[i];
	    }
	    for(int i=0;i+d<n;i++){
	        a[i] = a[i+d];
	    }
	    for(int i=0;i<d;i++) a[i+n-d] = b[i]; 
	    for(int i=0;i<n;i++) cout<<a[i]<<" ";
	    cout<<endl;
	}
	return 0;
}