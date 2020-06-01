#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    if(floor(log2(n))== ceil(log2(n)) and n!=0) cout<<"YES";
	    else cout<<"NO";
	    cout<<endl;
	}
	return 0;
}