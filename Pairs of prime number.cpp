#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    string s;
    cin>>t;
    bool dp[401];
    memset(dp,true,sizeof(dp));
    dp[0]=dp[1]=0;
    for(int i=2;i<401;i++){
        if(dp[i]){
            for(int j=i*2;j<401;j+=i){
                dp[j]=0;
            }
        }
    }
    while(t--){
        cin>>n;
        int cnt=0;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(dp[i] and dp[j] and i*j<=n) {
                    cout<<i<<" "<<j<<" ";
                }
            }
        }
        cout<<endl;
    }
	return 0;
}