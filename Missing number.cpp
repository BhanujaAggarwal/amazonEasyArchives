#include<bits/stdc++.h>
using namespace std;

int index(int a[], int n){
    int xor1=a[0],xor2=1;
    for(int i=1;i<n-1;i++) xor1^=a[i];
    for(int i=2;i<=n;i++) xor2^=i;
    return xor1^xor2;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n-1];
        for(int i=0;i<n-1;i++) cin>>a[i];
        cout<<index(a,n)<<endl;
    }
	return 0;
}