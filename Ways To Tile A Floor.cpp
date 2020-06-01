#include<bits/stdc++.h>
using namespace std;

long long int ways(long long int w){
    long long int dp[w];
    dp[0]=1;
    dp[1]=2;
    for(long long int i=2;i<w;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[w-1];
}

// int ways(int w){
//     if(w<3) return w;
//     return ways(w-2) + ways(w-1);
// }

int main(){
    long long int t,w;
    cin>>t;
    while(t--){
        cin>>w;
        cout<<ways(w)<<endl;
    }
	
	return 0;
}