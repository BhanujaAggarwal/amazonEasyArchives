#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    int i=0,vow=0,con=0;
    
    while(i<s.size()){
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
            vow++;
            con=0;
        } else if(s[i]!='?'){
             con++;
             vow=0;
        }
        else{
            vow++,con++;
        } 
        if(vow>5 or con>3) return false;
        i++;
    }
    return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    cout<<check(s)<<endl;
	}
	return 0;
}