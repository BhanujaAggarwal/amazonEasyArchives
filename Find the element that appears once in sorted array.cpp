#include<bits/stdc++.h>
using namespace std;

int singleocc(int a[], int n){
    int cnt=1;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            cnt++;
        } else{
            if(cnt==1) return a[i];
            cnt=1;
        }
    }
    return a[n-1];
}

int main(){
	int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<singleocc(a,n)<<endl;
    }
	return 0;
}