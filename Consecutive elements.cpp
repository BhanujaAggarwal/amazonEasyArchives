#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int i=0;
        while(i<s.size()){
            while(s[i]==s[i+1]){
                s.erase(s.begin()+i+1);
            }
            i++;
        }
        cout<<s<<endl;
    }
	
	return 0;
}