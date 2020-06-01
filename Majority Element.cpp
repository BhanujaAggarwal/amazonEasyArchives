#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,ele=-1;
        cin>>n;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++) {
            cin>>a;
            m[a]++;
        }
        for(auto i:m){
            if(i.second>n/2){
                ele=i.first;
                break;
            }
        }
        cout<<ele<<endl;
    }
	
	return 0;
}