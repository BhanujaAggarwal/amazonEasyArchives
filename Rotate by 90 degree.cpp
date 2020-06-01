#include<bits/stdc++.h>
using namespace std;

void transpose(vector<vector<long long int>> &a,long long int n){
    for(long long int i=0;i<n;i++){
        for(long long int j=i;j<n;j++){
            swap(a[j][i],a[i][j]);
        }
    }
}

void reversecol(vector<vector<long long int>> &a, long long  int n){
    for(long long int j=0;j<n;j++){
        for(long long int i=0;i<n/2;i++){
            swap(a[i][j],a[n-i-1][j]);
        }
    }
}

int main(){
	long long int t;
	cin>>t;
	while(t--){
	    long long int n,k;
	    cin>>n;
	    vector<vector<long long int>> a;
	    for(long long int i=0;i<n;i++){
	        vector<long long int> v;
	        for(long long int j=0;j<n;j++){
	            cin>>k;
	            v.push_back(k);
	        }
	        a.push_back(v);
	    }
	    transpose(a,n);
	    reversecol(a,n);
	    for(long long int i=0;i<n;i++){
	        for(long long int j=0;j<n;j++){
	            cout<<a[i][j]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}