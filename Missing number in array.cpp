#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n-1],i=0; 
	    for(i=0;i<n-1;i++) cin>>a[i];
	    int x1 = a[0], x2 = 1;
	    for(int i=2;i<=n;i++) x2 = x2^i;
	    for(int i=1;i<n-1;i++) x1 = x1^a[i];
	    x1 = x1^x2;
	    cout<<x1<<endl;
	}
	return 0;
}