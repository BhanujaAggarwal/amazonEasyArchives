#include <iostream>
#include <regex>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    
	    cin.ignore();
	    string s;
	    getline(cin,s);
	    s.erase(s.find_last_not_of(" \t")+1);
	    const auto target = regex{ " " };
        const auto replacement = string{ "%20" };
        cout << regex_replace( s, target, replacement ) << endl;
        int n;
        cin>>n;
	    }
	
	
	return 0;
}