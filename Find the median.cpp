#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        if(n%2) cout<<a[n/2];
        else cout<<(a[n/2-1]+a[(n/2)])/2;
        cout<<endl;
    }
	
	return 0;
}