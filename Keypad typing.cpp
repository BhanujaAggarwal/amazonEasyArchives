#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    string s;
    cin>>t;
    map<char,int> m;
    int i=2;
    char c='a';
    while(i<10){
        m[c++]=i;
        m[c++]=i;
        m[c++]=i;
        if(i==7 or i==9) m[c++]=i;
        i++;
    }
    while(t--){
        cin>>s;
        for(int i=0;i<s.size();i++){
            cout<<m[s[i]];
        }
        cout<<endl;
    }
	return 0;
}