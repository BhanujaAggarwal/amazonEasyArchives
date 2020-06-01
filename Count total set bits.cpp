#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            cnt+=__builtin_popcount(i);
        }
        cout<<cnt<<endl;
    }
	return 0;
}