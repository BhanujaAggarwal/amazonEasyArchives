#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s=INT_MAX,idx=-1;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(s>a[i]) {
                s = a[i];
                idx = i;
            }
        } 
        int ss=INT_MAX;
        for(int i=0;i<n;i++){
            if(ss>a[i] and i!=idx and a[i]!=s) {
                ss = a[i];
            }
        } 
        if(ss==INT_MAX) cout<<"-1"<<endl;
        else cout<<s<<" "<<ss<<endl;
    }
	return 0;
}