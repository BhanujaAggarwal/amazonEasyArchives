#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,a,mini=INT_MAX,maxi=INT_MIN;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        n= 2*n+2,mini=INT_MAX,maxi=INT_MIN;
        unordered_map<int,bool> m;
        for(int i=0;i<n;i++){
            cin>>a;
            m[a]=!m[a];
        }
        for(auto i:m) {
            if(i.second%2==1) {
                maxi = max(maxi,i.first);
                mini = min(mini,i.first);
            }
        }
        cout<<mini<<" "<<maxi<<endl;
    }
	
	return 0;
}