#include<bits/stdc++.h>
using namespace std;

void indexequalnum(int a[], int n){
    bool b=0;
    for(int i=0;i<n;i++) if(a[i]==i+1) {
        cout<<a[i]<<" ";
        b=1;
    }
    if(!b) cout<<"Not Found";
}

int main(){
	int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        indexequalnum(a,n);
        cout<<endl;
    }
	return 0;
}