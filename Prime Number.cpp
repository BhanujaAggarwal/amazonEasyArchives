#include<bits/stdc++.h>
using namespace std;

bool prime(long long int n){
    if(n<2) return false;
    if(n<4) return true;
    if(n%2==0 or n%3==0) return false;
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0 or n%(i+2)==0) return false;
    }
    return true;
}

int main(){
	long long int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(prime(n)) cout<<"Yes";
        else cout<<"No";
        cout<<endl;
    }
	return 0;
}