#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	    int n,d,j=0;
	    cin>>n>>d;
	    int a[n],b[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    for(int i=0;i<n-d;i++){
	        b[i] = a[i+d];
	    }
	    for(int i=0;i<d;i++){
	        b[n-d+i] = a[i];
	    }
	    for(int i=0;i<n;i++) cout<<b[i]<<" ";
	    cout<<endl;
	}
	return 0;
}