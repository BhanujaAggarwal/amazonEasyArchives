#include<bits/stdc++.h>
using namespace std;

long long int calsum(string s){
    int ans=0;
    string curr="";
    for(int i=0;i<s.size();i++){
        curr="";
        while(isdigit(s[i])){
            curr+=s[i];
            i++;
        }
        if(curr.length()) ans+=stoi(curr);
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        cout<<calsum(s)<<endl;
    }
	
	return 0;
}