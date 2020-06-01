#include<bits/stdc++.h>
using namespace std;

bool check(int num){
    int n = log2(num);
    n++;
    int setbits = __builtin_popcount(num);
    if(setbits==n) return true;
    return false;
}

int main(){
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    if(check(n)) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}