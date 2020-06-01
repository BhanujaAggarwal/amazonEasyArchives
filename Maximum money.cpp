#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n%2) {
            cout<<(n/2 +1)*k<<endl;
        } else cout<<(n/2)*k<<endl;
    }
	return 0;
}