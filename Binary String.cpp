#include<bits/stdc++.h>
using namespace std;

int cntsubstr(int n){
    return (n*(n-1))/2;
}

int main(){
    int t,a,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        int cnt=0;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='1') cnt++;
        } 
        cout<<cntsubstr(cnt)<<endl;
    }
	return 0;
}