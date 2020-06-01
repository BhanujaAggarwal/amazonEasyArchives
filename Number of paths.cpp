#include<bits/stdc++.h>
using namespace std;

int numpaths(int m, int n){
    if(m==1 or n==1) return 1;
    return numpaths(m-1,n) + numpaths(m,n-1);
}

int main(){
    int n,t,m;
    cin>>t;
    while(t--){
        cin>>m>>n;
        cout<<numpaths(m,n)<<endl;
    }
	
	return 0;
}