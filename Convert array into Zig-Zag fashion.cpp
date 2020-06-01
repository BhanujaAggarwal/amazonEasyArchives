#include<bits/stdc++.h>
using namespace std;

void zigzag(int a[], int n){
    bool b=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1] and !b) {
            swap(a[i],a[i+1]);
        }
        if(a[i]<a[i+1] and b) {
            swap(a[i],a[i+1]);
        }
        b=!b;
    }
}

int main(){
	int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        zigzag(a,n);
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
	return 0;
}