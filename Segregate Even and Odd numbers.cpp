#include<bits/stdc++.h>
using namespace std;

void segregate(int a[], int n){
    int i=0,j=n-1;
    while(i<j){
        while(a[i]%2==0 and i<j){
            i++;
        }
        while(a[j]%2==1 and i<j){
            j--;
        }
        if(i<j){
            swap(a[i],a[j]);
        }
    }
    sort(a,a+i);
    sort(a+i,a+n);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        segregate(a,n);
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
	
	return 0;
}