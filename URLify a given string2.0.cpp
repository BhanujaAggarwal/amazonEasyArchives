#include <iostream>
#include <regex>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    cin.ignore();
	    string s,ans="";
	    getline(cin,s);
        int n;
        cin>>n;
	    for(int i=0;i<s.size();i++){
	        if(s[i]==' '){
	            ans+="%20";
	        } else {
	            ans+=s[i];
	        }
	    }
	    cout<<ans<<endl;
	}
	
	
	return 0;
}