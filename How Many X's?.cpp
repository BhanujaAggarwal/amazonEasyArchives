#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,l,r;
    char x;
    string s;
    cin>>t;
    while(t--){
        cin>>x>>l>>r;
        int cnt=0;
        for(int i=l+1;i<r;i++){
            s = to_string(i);
            cnt += count(s.begin(),s.end(),x);
        }
        cout<<cnt<<endl;
    }
	
	return 0;
}