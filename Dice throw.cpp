#include<bits/stdc++.h>
using namespace std;

long long int cnt(int m, int n, int x){
    long long int dp[n+1][x+1];
    memset(dp,0,sizeof(dp));
    for(int j=1;j<=m and j<=x;j++){
        dp[1][j] = 1;
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<=x;j++){
            for(int k=1;k<=m and j-k>=0;k++){
                dp[i][j]+=dp[i-1][j-k];
            }
        }
    }
    return dp[n][x];
}

// long long int cnt(int m, int n, int x){
//     if(x<1) return 0;
//     if(n==1) return (x<=m);
//     long long int ans=0;
//     for(int i=1;i<=m;i++){
//         ans+= cnt(m,n-1,x-i);
//     }
//     return ans;
// }

int main(){
    int t,n,m,x;
    string s;
    cin>>t;
    while(t--){
        cin>>m>>n>>x;
        cout<<cnt(m,n,x)<<endl;
    }
	
	return 0;
}