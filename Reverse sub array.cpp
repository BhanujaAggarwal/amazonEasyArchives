#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,l,r;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cin>>l>>r;
        l--,r--;
        while(l<=r){
            swap(a[l],a[r]);
            l++;
            r--;
        }
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
	return 0;
}