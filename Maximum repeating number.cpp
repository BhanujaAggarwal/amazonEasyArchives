#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,a,ans,maxi,q;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[k+1]={0};
        for(int i=0;i<n;i++){
            cin>>q;
            a[q]++;
        }
        int ans=0,maxi=a[0];
        for(int i=1;i<k+1;i++){
            if(maxi<a[i]){
                maxi=a[i];
                ans=i;
            } 
        }
        cout<<ans<<endl;
    }
	
	return 0;
}