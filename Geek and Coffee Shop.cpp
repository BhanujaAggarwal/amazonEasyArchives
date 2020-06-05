#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,m;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>m;
        cout<<fixed<<setprecision(0)<<floor(n/pow(2,m-1))<<endl;
    }
	return 0;
}