#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        unordered_map<int,int> m;
        bool bg=0;
        for(int i=0;i<n;i++){
            if(m.find(a[i])!=m.end()){
                bg=1;
                break;
            }
            m[a[i]]++;
        }
        if(bg) cout<<"BOYS"<<endl;
        else cout<<"GIRLS"<<endl;
    }
	
	return 0;
}