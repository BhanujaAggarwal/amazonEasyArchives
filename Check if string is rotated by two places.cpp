#include<bits/stdc++.h>
using namespace std;

string rotateleft(string s, int d){
    int n = s.size();
    reverse(s.begin(), s.begin()+d);
    reverse(s.begin()+d, s.begin()+n);
    reverse(s.begin(), s.begin()+n);
    return s;
}

string rotateright(string s, int d){
    int n = s.size();
    return rotateleft(s,n-d);
}

bool check(string s1, string s2){
    if(rotateleft(s1,2)==s2 or rotateright(s1,2)==s2) return true;
    return false;
}

int main(){
    int t,n;
    string s1,s2;
    cin>>t;
    while(t--){
        cin>>s1>>s2;
        cout<<check(s1,s2)<<endl;
    }
	
	return 0;
}