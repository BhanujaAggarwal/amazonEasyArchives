#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,maxi=-1,idx;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]>maxi){
	            maxi = a[i];
	            idx = i;
	        }
	    } 
	    int max2 = -1;
	    for(int i=0;i<n;i++){
	        if(a[i]>max2 and i!=idx){
	            max2 = a[i];
	        }
	    } 
	    cout<<maxi*max2<<endl;
	}
	return 0;
}