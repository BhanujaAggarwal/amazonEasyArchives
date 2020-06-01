#include<bits/stdc++.h>
using namespace std;

void reverse(string &word){
    int n = word.size();
    for(int i=0;i<n/2;i++){
        swap(word[i],word[n-i-1]);
    }
}

string reverseWords(string s){
    string ans="",word="";
    for(int i=0;i<s.size();i++){
        if(s[i]!='.'){
            word+=s[i];
        } else{
            reverse(word);
            ans+=word;
            ans+='.';
            word="";
        }
    }
    if(word.size()) {
        reverse(word);
        ans+=word;
    }
    return ans;
}

int main(){
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        cout<<reverseWords(s)<<endl;
    }
	
	return 0;
}