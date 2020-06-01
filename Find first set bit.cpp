#include<bits/stdc++.h>
using namespace std;

long long int bitpos(long int n){
    int cnt = 0;
    while(n){
        if(n%2) return cnt+1;
        cnt++;
        n=n/2;
    }
    return 0;
}

int main(){
	int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        cout<<bitpos(n)<<endl;
    }
	return 0;
}