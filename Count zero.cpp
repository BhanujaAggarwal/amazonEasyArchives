#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,d;
    string s;
    cin>>t;
    long long int dp[16]={0};
    for(d=1;d<16;d++){
        dp[d] = 9*(pow(10,d-1)) - (pow(9,d));
    }
    while(t--){
        cin>>d;
        long long int ans=0;
        while(d--){
            ans+=dp[d+1];
        }
        cout<<ans<<endl;
    }
	
	return 0;
}