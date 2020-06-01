#include<bits/stdc++.h>
using namespace std;

void reverse(string &s){
    int n = s.size();
    for(int i=0;i<n/2;i++){
        swap(s[i],s[n-1-i]);
    }
}

int main(){
	int t;
	string s;
    cin>>t;
    while(t--){
        cin>>s;
        reverse(s);
        cout<<s<<endl;
    }
	return 0;
}