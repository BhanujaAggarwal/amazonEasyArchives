#include<bits/stdc++.h>
using namespace std;

void generate(int n){
    queue<string> q;
    q.push("1");
    while(n--){
        string curr = q.front();
        q.pop();
        cout<<curr<<" ";
        string curr2 = curr;
        q.push(curr.append("0"));
        q.push(curr2.append("1"));
    }
}

int main(){
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    generate(n);
	    cout<<endl;
	}
	return 0;
}