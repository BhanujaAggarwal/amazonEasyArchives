#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,x,a;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>x;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }
        auto l = lower_bound(v.begin(),v.end(),x);
        auto u = upper_bound(v.begin(),v.end(),x);
        int ll = l-v.begin(),uu = u-v.begin()-1;
        if(v[ll]==x and v[uu]==x){
            cout<<ll<<" "<<uu<<endl;
        }
        else cout<<"-1"<<endl;
    }
	return 0;
}