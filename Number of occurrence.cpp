#include<bits/stdc++.h>
using namespace std;

int numocc(int a[], int n, int k){
    int cnt=0;
    for(int i=0;i<n;i++){
        while(a[i]==k and i<n) cnt++,i++;
    }
    if(cnt) return cnt;
    return -1;
}

int main(){
	int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<numocc(a,n,k)<<endl;
    }
	return 0;
}