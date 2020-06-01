#include<bits/stdc++.h>
using namespace std;

void findlr(int a[], int n, int k){
    int l=-1,r=-1;
    for(int i=0;i<n;i++){
        if(a[i]==k){
            l=i,r=i;
            i++;
        } 
        while(a[i]==k and i<n){
            r++,i++;
        }
        if(l!=-1){ 
            cout<<l<<" "<<r;
            return;
        }
    }
    cout<<"-1";
}

int main(){
	int n,t,k;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cin>>k;
        findlr(a,n,k);
        cout<<endl;
    }
	return 0;
}