#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        int maxi = INT_MIN,a,b,c,avg;
        vector<string> name;
        for(int i=0;i<n;i++){
            cin>>s>>a>>b>>c;
            int avg = (a+b+c)/3;
            if(avg==maxi){
                name.push_back(s);
            } else if(avg>maxi){
                maxi = avg;
                name.clear();
                name.push_back(s);
            }
            // cout<<name.size();
        }
        for(auto i:name) cout<<i<<" ";
        cout<<maxi<<endl;
    }
	
	return 0;
}