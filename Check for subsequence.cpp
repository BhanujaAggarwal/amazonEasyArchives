#include<bits/stdc++.h>
using namespace std;

bool subseq(string s1, string s2){
    int j=0;
    for(int i=0;i<s2.size();i++){
        if(s1[j]==s2[i]) j++;
        if(j==s1.size()) return true;
    }
    if(j==s1.size()) return true;
    return false;
}

int main(){
    int t;
    cin>>t;
    string s1,s2;
    while(t--){
        cin>>s1>>s2;
        cout<<subseq(s1,s2)<<endl;
    }
	
	return 0;
}