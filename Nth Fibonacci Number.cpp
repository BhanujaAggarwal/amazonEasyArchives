#include<bits/stdc++.h>
using namespace std;
const unsigned int M = 1000000007;

long long int fib(int n){
    int dp[n];
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<n;i++){
        dp[i] = (dp[i-1] + dp[i-2])%M;
    }
    return dp[n-1];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fib(n)<<endl;
    }
	
	return 0;
}